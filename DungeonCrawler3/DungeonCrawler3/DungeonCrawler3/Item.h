#pragma once
#include <string>
#include <map>
enum ItemEffects;

class Item
{
public:
	Item();
private:
	int duration;
	std::map<ItemEffects, int> itemList;
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