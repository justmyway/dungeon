#include "stdafx.h"
#include "Map.h"
#include <iostream>

using namespace std;
Map::Map()
{
}

Map::~Map()
{
}

void Map::draw()
{
	for (int y = 0; y < ySize; ++y)
	{
		for (int x = 0; x < xSize; ++x)
		{
			cout << ".";
		}
		cout << endl;
	}
}
