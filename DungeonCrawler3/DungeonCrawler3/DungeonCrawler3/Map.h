#pragma once
#include "MapRoom.h"
class MapRoom;

class Map
{
public:
	Map();

	Map(int x_size, int y_size)
		: xSize(x_size),
		  ySize(y_size)
	{
	}

	~Map();
	void draw();

private:
	MapRoom beginRooms;
	MapRoom floorplan;
	int xSize;
	int ySize;
};