#pragma once
#include <list>
#include <map>
#include <string>
#include "Corridor.h"
#include "Enemy.h"
#include "Item.h"
#include "RoomSpecification.h"

class Corridor;
class Enemy;
class Item;
class RoomSpecification;

class Room
{
public:
	Room();
	~Room();
	bool GetVisited();

private:
	std::list<Corridor> corridors;
	std::list<Enemy> enemnies;
	std::list<Item> items;
	std::map<std::string, RoomSpecification> specifications;
	bool visited;
};