#pragma once
enum EnemyState
{
	fighting,
	following,
	idle
};

class Enemy
{
public:
	Enemy();
	~Enemy();

private:
	int health;
	int level;
	EnemyState status;
	int strength;
};

