#include <serenity/NetServer.h>
#include <serenity/NetConnection.h>

serenity::net::server_interface::server_interface(uint16_t port)
	: m_acceptor(m_context, asio::ip::tcp::endpoint(asio::ip::tcp::v4(), port)) {}

serenity::net::server_interface::~server_interface()
{
	Stop();
}

bool serenity::net::server_interface::Start()
{
	try
	{
		WaitForClientConnection();

		m_thrContext = std::thread([this]() { m_context.run(); });
	}
	catch (std::exception& e)
	{
		std::cerr << "[SERVER] Error: " << e.what() << std::endl;
		return false;
	}

	std::cout << "[SERVER] Started." << std::endl;
	return true;
}

void serenity::net::server_interface::Stop()
{
	m_context.stop();

	if (m_thrContext.joinable()) m_thrContext.join();

	std::cout << "[SERVER] Stopped." << std::endl;


}

// ASYNC - instruct asio to wait connections
void serenity::net::server_interface::WaitForClientConnection()
{
	m_acceptor.async_accept(
		[this](asio::error_code ec, asio::ip::tcp::socket socket)
		{
			if (!ec)
			{
				std::cerr << "[SERVER] New connection accepted: " << socket.remote_endpoint() << std::endl;

				// create temp connection object
				std::shared_ptr<connection> new_conn =
					std::make_shared<connection>(connection::owner::server,
						m_context, std::move(socket), m_qMessagesIn); /// grab 'socket' and move it to connection pointer object

				// check if connection fulfilled
				if (OnClientConnect(new_conn))
				{
					// add temp connection to queue of connections
					m_deqConnections.push_back(std::move(new_conn));

					m_deqConnections.back()->ConnectToClient(nIDCounter++); // start reading incoming messages

					std::cout << "[" << m_deqConnections.back()->GetID() << "]" << " connection approved." << std::endl;
				}
				else
				{
					std::cout << "[------] Connection denied." << std::endl;
				}
			}
			else
			{
				std::cerr << "[SERVER] New connection error: " << ec.message() << std::endl;
			}

			// wait for next connection
			WaitForClientConnection();
		}
	);
}

void serenity::net::server_interface::MessageClient(std::shared_ptr<connection> client, const message& msg)
{
	if (client && client->IsConnected())
	{
		client->Send(msg);
	}
	else
	{
		OnClientDisconnect(client);
		client.reset();
		m_deqConnections.erase(
			std::remove(m_deqConnections.begin(), m_deqConnections.end(), client), m_deqConnections.end());
	}
}

void serenity::net::server_interface::MessageAllClients(const message& msg, std::shared_ptr<connection> ignoreClient)
{
	bool bInvalidClientExist = false;

	for (auto& client : m_deqConnections)
	{
		if (client && client->IsConnected())
		{
			if (client != ignoreClient)
				client->Send(msg);
		}
		else
		{
			OnClientDisconnect(client);
			client.reset();
			bInvalidClientExist = true;
		}
	}

	if (bInvalidClientExist)
	{
		m_deqConnections.erase(
			std::remove(m_deqConnections.begin(), m_deqConnections.end(), nullptr), m_deqConnections.end());
	}
}

void serenity::net::server_interface::Update(size_t nMaxMessages, bool bWait)
{
	if (bWait) m_qMessagesIn.wait();

	size_t nMessagesCount = 0;
	while (nMessagesCount < nMaxMessages && !m_qMessagesIn.empty())
	{
		auto msg = m_qMessagesIn.pop_front();

		OnMessage(msg.remote, msg.msg);
		nMessagesCount++;
	}
}

// Handlers

bool serenity::net::server_interface::OnClientConnect(std::shared_ptr<connection> client)
{
	return true;
}

void serenity::net::server_interface::OnClientDisconnect(std::shared_ptr<connection> client)
{

}

void serenity::net::server_interface::OnMessage(std::shared_ptr<connection> client, message& msg)
{

}