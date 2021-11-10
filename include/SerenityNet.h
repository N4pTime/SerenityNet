#pragma once

#include "serenity/NetClient.h"
#include "serenity/NetServer.h"
#include "serenity/NetConnection.h"

/// <summary>
/// enum class of message types for server/client
namespace serenity
{
	namespace net
	{
		enum class MessageTypes : uint32_t
		{
			// Server basic stuff:

			ServerAccept,
			ServerDeny,
			ServerPing,

			/// Packet messages:

			// like chat message but special
			ServerSystemMessage,

			// info about player (position, rotation, identificator, name, etc.)
			PlayerInfo,

			// string message to chat
			ChatMessage,

			// login info for accept/decline sending game data
			LoginInfo,

			// Game specific: //TODO: can be moved to enum class inside game code

			// map data for voxel game
			ChunkInfo
		};
	}
}
/// </summary>