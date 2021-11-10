#include "serenity/NetMessage.h"

size_t serenity::net::message::size() const
{
	return body.size();
}

void serenity::net::message::resize(size_t size)
{
	body.resize(size);
	header.size = (uint32_t)size;
}

const uint8_t* serenity::net::message::data()
{
	return body.data();
}

void serenity::net::message::clear()
{
	body.clear();
	header.size = 0;
}