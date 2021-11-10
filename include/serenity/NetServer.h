#pragma once
#include <serenity/NetCommon.h>

#include <serenity/NetMessage.h>
#include <serenity/NetTsQueue.h>

namespace serenity
{
	namespace net
	{
		class server_interface
		{
		public:
			server_interface(uint16_t port);
			virtual ~server_interface();

			bool Start();
			void Stop();

			// ASYNC - instruct asio to wait connections
			void WaitForClientConnection();
			void MessageClient(std::shared_ptr<connection> client, const message& msg);
			void MessageAllClients(const message& msg, std::shared_ptr<connection> ignoreClient = nullptr);

			void Update(size_t nMaxMessages = -1, bool bWait = false);

			size_t GetNumClients();

		protected:

			virtual bool OnClientConnect(std::shared_ptr<connection> client);
			virtual void OnClientDisconnect(std::shared_ptr<connection> client);
			virtual void OnMessage(std::shared_ptr<connection> client, message& msg);

		private:
			
			// income message packets
			tsqueue<owned_message> m_qMessagesIn;

			std::deque<std::shared_ptr<connection>> m_deqConnections;

			// asio staff
			asio::io_context m_context;
			std::thread m_thrContext;

			asio::ip::tcp::acceptor m_acceptor;

			uint32_t nIDCounter = 10000;

		};
	}
}