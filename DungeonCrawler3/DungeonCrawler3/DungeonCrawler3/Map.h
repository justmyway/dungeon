#pragma once
#include "MapRoom.h"
class MapRoom;

class Map
{
public:
	Map();
	Map(const std::list<MapRoom>& map_rooms, int x_size, int y_size)
		: rooms(map_rooms),
		  xSize(x_size),
		  ySize(y_size)
	{
	}
	~Map();
	void draw();

private:
	std::list<MapRoom> rooms;

	

	MapRoom beginRooms;
	MapRoom floorplan;
	int xSize;
	int ySize;

};

