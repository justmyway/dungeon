#pragma once
#include "Room.h"
class MapRoom
{
public:
	MapRoom();
	~MapRoom();
	std::string GetIcon();

private:
	Room room;
	int x;
	int y;
};