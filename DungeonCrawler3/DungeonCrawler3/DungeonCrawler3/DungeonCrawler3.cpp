// DungeonCrawler3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Map.h"
#include <iostream>

using namespace std;

int main()
{
    
	Map* map = new Map(10,	12);
	map->draw();
	

	delete map;
	string in;
	cin >> in;
	return 0;
}

