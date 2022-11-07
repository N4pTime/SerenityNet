#pragma once
#include <serenity/NetCommon.h>

#include <serenity/NetMessage.h>
#include <serenity/NetTsQueue.h>

namespace serenity
{
	namespace net
	{
		// forward declare
		class connection;

		class client_interface
		{
		public:
			client_interface();
			virtual ~client_interface();

		public:

			bool Connect(const std::string& host, uint16_t port);

			void Disconnect();
			bool IsConnected();

		public:

			// Update for receiving incoming messages from server
			void Update(size_t nMaxMessages = -1, bool bWait = false);

			// Send message to server
			void Send(message::ptr msg);

			tsqueue<owned_message::ptr>& IncomingMessages();

		protected:

			virtual void OnMessage(message::ptr msg);

			virtual void OnDisconnected(); // example: send message about disconnecting

		protected:
			// handle asio work
			std::thread thrContext;
			std::future<void> fContext;

			// asio context handle the data transfer
			asio::io_context m_context;

			// The client has a single instance of connection
			std::shared_ptr<connection> m_connection = nullptr;

		private:

			// Thread safe queue of server incoming messages
			tsqueue<owned_message::ptr>* m_qMessagesIn;

			enum class ErrorFlag {
				Log,
				Warning,
				Error
			};

			// Override function for some other output stream, by default used std::cout
			virtual void PrintDebug(const std::string& text, ErrorFlag flag = ErrorFlag::Log);
		};
	}
}
