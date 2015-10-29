#pragma once
#include "MapRoom.h"
class MapRoom;

class Map
{
public:
	Map();
	~Map();
	void draw();

private:
	MapRoom beginRooms;
	MapRoom floorplan;
};