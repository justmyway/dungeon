#include "stdafx.h"
#include "MapIcon.h"

using namespace std;

MapIcon::MapIcon()
{

	icons = {
		{"horizontalCorridor", "_"},
		{ "verticalCorridor", "|" },
		{ "startRoom", "S" },
		{ "lastEnemy", "E" },
		{ "normalRoom", "N" },
		{ "upstair", "U" },
		{ "downStair", "D" },
		{ "univisitedRoom", "." }
	};
}
