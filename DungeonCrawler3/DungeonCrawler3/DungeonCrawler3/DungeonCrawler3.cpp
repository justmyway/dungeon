// DungeonCrawler3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Map.h"
#include <iostream>

using namespace std;

int main()
{
	auto* corridor = new Corridor();
	auto* corridorList = new list<Corridor>;
	corridorList->push_back(*corridor);

	auto* enemy = new Enemy();
	auto* enemyList = new list<Enemy>;
	enemyList->push_back(*enemy);

	auto* item = new Item();
	auto* itemList = new list<Item>;
	itemList->push_back(*item);

	auto* room1 = new Room(*corridorList, *enemyList, *itemList, false);
	auto* mapRoom1 = new MapRoom(*room1, 0,0);

	auto* mapRoomList = new list<MapRoom>;
	mapRoomList->push_back(*mapRoom1);
	auto* map = new Map(*mapRoomList, 10, 12);
	map->draw();
	
	delete map;
	delete room1;
	delete mapRoom1;
	delete mapRoomList;
	delete corridor;
	delete corridorList;
	delete enemy;
	delete enemyList;
	delete item;
	delete itemList;
	
	string in;
	cin >> in;
	return 0;
}