#pragma once
#include "Room.h"
class Room;

class Corridor
{
public:
	Corridor();
	~Corridor();
private:
	Room begin;
	Room end;
	bool visited;
}; 