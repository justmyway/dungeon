#pragma once
#include "Armour.h"
#include "Room.h"
#include "Weapon.h"
class Room;
class Armour;
class Weapon;

class Player
{
public:
	Player(Room);
	~Player();
	void DropArmour();
	void PickUpArmour();
	void DropWeapon();
	void PickUpWeapon();

private:
	Armour armour;
	Room currentRoom;
	int focus;
	int health;
	std::list<Item> items;
	int level;
	std::string name;
	int strength;
	Weapon weapon;
	int xp;
};