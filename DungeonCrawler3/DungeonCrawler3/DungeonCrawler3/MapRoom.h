#pragma once
#include "Room.h"
class MapRoom
{
public:
	MapRoom();

	MapRoom(const Room& room, int x, int y)
		: room(room),
		  x(x),
		  y(y)
	{
	}

	~MapRoom();
	std::string GetIcon();

private:
	Room room;
	int x;
	int y;
};