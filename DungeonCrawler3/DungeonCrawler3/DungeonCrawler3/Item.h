#pragma once
#include <string>
#include <map>

enum ItemEffects
{
	armour,
	focus,
	health,
	strength,
	xp
};

class Item
{
public:
	Item();
private:
	int duration;
	std::map<ItemEffects, int> itemList;
	std::string name;
};

