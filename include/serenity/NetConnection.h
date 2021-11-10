#pragma once
#include <serenity/NetCommon.h>

#include <serenity/NetMessage.h>
#include <serenity/NetTsQueue.h>

namespace serenity
{
	namespace net
	{
		class connection : public std::enable_shared_from_this<connection> {
		public:

			enum class owner
			{
				server,
				client
			};

			enum class StateFlag
			{
				DISCONNECTED,
				CONNECTING,
				CONNECTED,
			};

			connection(owner parent, asio::io_context& context, asio::ip::tcp::socket socket, tsqueue<owned_message>& qIn);
			virtual ~connection();

			uint32_t GetID() const;

		public:

			void ConnectToClient(uint32_t uid = 0);
			void ConnectToServer(const asio::ip::tcp::resolver::results_type& endpoints);

			void Disconnect();
			bool IsConnected() const;

			StateFlag GetConnectionState();

		public:

			void Send(const message& msg);

		protected:

			message m_msgTempIn;

			// ASYNC - 
			void ReadHeader();
			void ReadBody();
			void WriteHeader();
			void WriteBody();

			void AddToIncomingMessageQueue();

		private:

			asio::ip::tcp::socket m_socket;
			asio::io_context& m_context;

			// single at every connection
			tsqueue<message> m_qMessagesOut;

			// all incoming messages in one heap
			tsqueue<owned_message>& m_qMessagesIn;

			owner m_nOwnerType = owner::server;
			uint32_t id = 0;

			StateFlag nState = StateFlag::DISCONNECTED;
		};

	}
}