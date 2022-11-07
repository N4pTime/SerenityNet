#include <serenity/NetConnection.h>

serenity::net::connection::connection(owner parent, asio::io_context& context,
	asio::ip::tcp::socket socket, tsqueue<owned_message::ptr>& qIn)
		: m_context(context), m_socket(std::move(socket)), m_qMessagesIn(qIn)
{
	m_nOwnerType = parent;
}


serenity::net::connection::~connection() {}


uint32_t serenity::net::connection::GetID() const
{
	return id;
}

serenity::net::connection::StateFlag serenity::net::connection::GetConnectionState()
{
	return nState;
}

// Connection functions

void serenity::net::connection::ConnectToClient(uint32_t uid)
{
	if (m_nOwnerType == owner::server)
	{
		if (m_socket.is_open())
		{
			id = uid;
			ReadHeader();
		}

	}
}


void serenity::net::connection::ConnectToServer(const asio::ip::tcp::resolver::results_type& endpoints)
{
	if (m_nOwnerType == owner::client && nState == StateFlag::DISCONNECTED)
	{
		nState = StateFlag::CONNECTING;

		asio::async_connect(m_socket, endpoints,
			[this, self = shared_from_this()](asio::error_code ec, asio::ip::tcp::endpoint endpoint)
			{
				if (!ec)
				{
					nState = StateFlag::CONNECTED;

					ReadHeader();
					std::cout << "[" << id << "]: Connected successfully." << std::endl;
				}
				else
				{
					std::cerr << "[" << id << "]: Connect to Server Fail." << std::endl;
					m_socket.close(); // ??????? почему не Disconnect()
					nState = StateFlag::DISCONNECTED;
				}
			});
	}
}


void serenity::net::connection::Disconnect()
{
	asio::post(m_context, [this, self = shared_from_this()]() { m_socket.close(); });

	nState = StateFlag::DISCONNECTED;
}


bool serenity::net::connection::IsConnected() const
{
	return m_socket.is_open();
}

// 


void serenity::net::connection::Send(const message::ptr& msg)
{
	asio::post(m_context,
		[this, msg]()
		{
			bool bWritingMessage = !m_qMessagesOut.empty();
			m_qMessagesOut.push_back(msg);

			if (!bWritingMessage)
				WriteHeader();
		});
}

// async asio functions

// ASYNC - ---------------------------------------------------------------------------------------------------------

void serenity::net::connection::ReadHeader()
{
	asio::async_read(m_socket, asio::buffer(&m_msgTempIn.header, sizeof(message_header)),
		[this, self = shared_from_this()](asio::error_code ec, std::size_t length)
		{
			if (!ec)
			{
				if (m_msgTempIn.header.size > 0)
				{
					m_msgTempIn.body.resize(m_msgTempIn.header.size);
					ReadBody();
				}
				else
				{
					AddToIncomingMessageQueue();
				}
			}
			else
			{
				std::cerr << "[" << id << "]: Read Header Fail: " << ec.message() << std::endl;
				m_socket.close(); // ??????? почему не Disconnect()
				nState = StateFlag::DISCONNECTED;
			}
		}
	);
}

// ASYNC - 

void serenity::net::connection::ReadBody()
{
	asio::async_read(m_socket, asio::buffer(m_msgTempIn.body.data(), m_msgTempIn.header.size),
		[this, self = shared_from_this()](asio::error_code ec, std::size_t length)
		{
			if (!ec)
			{
				AddToIncomingMessageQueue();
			}
			else
			{
				std::cerr << "[" << id << "]: Read Body Fail." << std::endl;
				m_socket.close(); // ??????? почему не Disconnect()
				nState = StateFlag::DISCONNECTED;
			}
		}
	);
}

// ASYNC - 

void serenity::net::connection::WriteHeader()
{
	const auto mMsgOut = m_qMessagesOut.front();

	asio::async_write(m_socket, asio::buffer(&mMsgOut->header, sizeof(message_header)),
		[this, self = shared_from_this()](asio::error_code ec, std::size_t length)
		{
			if (!ec)
			{
				if (m_qMessagesOut.front()->body.size() > 0)
				{
					WriteBody();
				}
				else
				{
					m_qMessagesOut.pop_front();

					if (!m_qMessagesOut.empty())
						WriteHeader();
				}
			}
			else
			{
				std::cerr << "[" << id << "]: Write Header Fail." << std::endl;
				m_socket.close(); // ??????? почему не Disconnect()
				nState = StateFlag::DISCONNECTED;
			}
		}
	);
}

// ASYNC - 

void serenity::net::connection::WriteBody()
{
	asio::async_write(m_socket, asio::buffer(m_qMessagesOut.front()->body.data(), m_qMessagesOut.front()->body.size()),
		[this, self = shared_from_this()](asio::error_code ec, std::size_t length)
		{
			if (!ec)
			{
				m_qMessagesOut.pop_front();

				if (!m_qMessagesOut.empty())
					WriteHeader();
			}
			else
			{
				std::cerr << "[" << id << "]: Write Body Fail." << std::endl;
				m_socket.close(); // ??????? почему не Disconnect()
				nState = StateFlag::DISCONNECTED;
			}
		}
	);
}


void serenity::net::connection::AddToIncomingMessageQueue()
{
	if (m_nOwnerType == owner::server)
		m_msgTempIn.remote = this->shared_from_this();
	else
		m_msgTempIn.remote = nullptr;

	m_qMessagesIn.push_back(std::make_shared<owned_message>(m_msgTempIn));

	// continue to read
	ReadHeader();
}