#pragma once
#include <string>
#include <map>
class Item
{
public:
	Item();
private:
	int duration;
	//std::map(ItemEffects, int);
	std::string name;
};

enum ItemEffects
{
	armour,
	focus,
	health,
	strength,
	xp
};