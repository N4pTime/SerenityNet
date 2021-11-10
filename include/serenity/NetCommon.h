#pragma once

#include <memory>
#include <thread>
#include <mutex>
#include <deque>
#include <optional>
#include <vector>
#include <iostream>
#include <algorithm>
#include <chrono>
#include <cstdint>

#ifdef _WIN32
#define _WIN32_WINNT 0x0A00
#endif

#define ASIO_STANDALONE
#include <asio.hpp>
#include <asio/ts/buffer.hpp>
#include <asio/ts/internet.hpp>

// Utils
#include <locale>
#include <codecvt>
#include <string>

namespace serenity
{
namespace utils
{

	/*std::wstring converttowstring(const std::string& source)
	{
		std::wstring_convert<std::codecvt_utf8_utf16<wchar_t>> converter;
		std::wstring wide = converter.from_bytes(source);

		return wide;
	}

	std::string converttostring(const std::wstring& source)
	{
		std::wstring_convert<std::codecvt_utf8_utf16<wchar_t>> converter;
		std::string narrow = converter.to_bytes(source);

		return narrow;
	}*/
}
}
