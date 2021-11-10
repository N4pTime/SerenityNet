#include <serenity/NetClient.h>
#include <serenity/NetConnection.h>

serenity::net::client_interface::client_interface() : m_qMessagesIn(new tsqueue<owned_message>())
{}

serenity::net::client_interface::~client_interface()
{
	Disconnect();

	// free memory
	delete m_qMessagesIn;
}


bool serenity::net::client_interface::Connect(const std::string& host, uint16_t port)
{
	if (IsConnected())
	{
		std::cout << "Error: Still connected." << std::endl;
		return false;
	}

	if (m_connection && m_connection->GetConnectionState() == serenity::net::connection::StateFlag::CONNECTING)
	{
		std::cout << "Error: In connecting state..." << std::endl;
		return false;
	}

	try
	{
		// resolve host/port into tangiable physical address
		asio::ip::tcp::resolver resolver(m_context);
		asio::ip::tcp::resolver::results_type endpoints = resolver.resolve(host, std::to_string(port));

		// Create connection or recreate
		m_connection = std::make_shared<connection>(
			connection::owner::client,
			m_context,
			asio::ip::tcp::socket(m_context),
			*m_qMessagesIn
			);

		m_connection->ConnectToServer(endpoints);

		thrContext = std::thread([this]()
			{ 
				std::cout << "[Thread ID]: " << std::this_thread::get_id() << " begin." << std::endl;

				
				if (m_context.stopped()) m_context.restart();

				m_context.run();
				std::cout << "[Thread ID]: " << std::this_thread::get_id() << " end." << std::endl;
			});
	}
	catch (std::exception& e)
	{
		std::cerr << "Client Exception: " << e.what() << "\n";
		return false;
	}
	return true;
}


void serenity::net::client_interface::Disconnect()
{
	bool bIsConnected = IsConnected();

	if (bIsConnected)
		m_connection->Disconnect();

	m_context.stop();
	m_context.reset(); // reset old tasks

	if (thrContext.joinable())
		thrContext.join();

	m_connection.reset();

	std::cout << "Disconnected. State: " << (bIsConnected ? "'true'" : "'false'") << std::endl;
}


bool serenity::net::client_interface::IsConnected()
{
	return m_connection && m_connection->IsConnected();
}


serenity::net::tsqueue<serenity::net::owned_message>& serenity::net::client_interface::IncomingMessages()
{
	return *m_qMessagesIn;
}

void serenity::net::client_interface::Update(size_t nMaxMessages, bool bWait)
{
	if (bWait) m_qMessagesIn->wait();

	size_t nMessagesCount = 0;
	while (nMessagesCount < nMaxMessages && !m_qMessagesIn->empty())
	{
		auto msg = m_qMessagesIn->pop_front();

		OnMessage(msg.msg);
		nMessagesCount++;
	}
}

void serenity::net::client_interface::OnMessage(message& msg)
{

}

// Send message to server

void serenity::net::client_interface::Send(const message& msg)
{
	if (bool res = IsConnected())
		m_connection->Send(msg);
}

void serenity::net::client_interface::PrintDebug(const std::string& text, ErrorFlag flag)
{
	if (flag == ErrorFlag::Log || flag == ErrorFlag::Warning)
		std::cout << text << std::endl;
	else
		std::cerr << text << std::endl;
}