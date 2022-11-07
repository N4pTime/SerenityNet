#pragma once

#include <vector>
#include <ostream>
#include <sstream>
#include <memory>

// #include <google/protobuf/message_lite.h>

namespace serenity 
{
	namespace net 
	{
		struct message_header
		{
			// тут хранится enum значения, что нибудь потом придумать с этим
			uint32_t id{}; 
			uint32_t size = 0;

			// возвращает id как значение заданного класса enum
			template<typename T>
			T GetEnumID()
			{
				return static_cast<T>(id);
			}
		};

		struct message 
		{
			typedef std::shared_ptr<message> ptr;

			message_header header{};
			std::vector<uint8_t> body;

			void setID(int idx)
			{
				header.id = idx;
			}

			void bufferData(uint8_t* data, size_t size)
			{
				header.size = (uint32_t)size;
				body.assign(data, data + size);
			}

			// returns size of the message in bytes
			size_t size() const;
			void resize(size_t size);
			const uint8_t* data();

			void clear();

			// override for std::cout, show description of message
			friend std::ostream& operator << (std::ostream& os, const message& msg)
			{
				os << "ID: " << int(msg.header.id) << " Size: " << msg.header.size;
				return os;
			}

			// ---- pushes std::string ----
			friend message& operator << (message& msg, const std::string& str)
			{
				msg.body.assign(str.begin(), str.end());
				msg.header.size = (uint32_t)msg.size();

				return msg;
			}

			friend message& operator >> (message& msg, std::string& str)
			{
				str.assign(msg.body.begin(), msg.body.end());

				msg.body.clear();
				msg.header.size = 0;

				return msg;
			}
			// ---- END pushes std::string ----


			//---- pushes from vector byte ----
			friend message& operator << (message& msg, const std::vector<uint8_t>& byte_array)
			{
				msg.body = byte_array;

				return msg;
			}

			friend message& operator >> (message& msg, std::vector<uint8_t>& byte_array)
			{
				byte_array = msg.body;
				// byte_array.clear();

				return msg;
			}
			// ---- END pushes from vector byte ----


			// ---- pushes protobuf message ----
			//friend message& operator << (message& msg, const google::protobuf::MessageLite& proto)
			//{
			//	// Serialize
			//	msg.resize(proto.ByteSizeLong());
			//	if (!proto.SerializeToArray(msg.body.data(), (int32_t)msg.size()))
			//		throw;

			//	return msg;
			//}

			//friend message& operator >> (message& msg, google::protobuf::MessageLite& proto)
			//{
			//	// Deserialize
			//	if (!proto.ParseFromArray(msg.data(), (int32_t)msg.size()))
			//		throw;

			//	msg.clear();

			//	return msg;
			//}
			// ---- END pushes protobuf message ----
		};

		// Forward declare the connection
		class connection;

		struct owned_message : message
		{
			typedef std::shared_ptr<owned_message> ptr;

			std::shared_ptr<connection> remote = nullptr;

			// override for std::cout, show description of message
			/*friend std::ostream& operator << (std::ostream& os, const owned_message& msg)
			{
				os << msg.msg;
				return os;
			}*/
		};
	}
}