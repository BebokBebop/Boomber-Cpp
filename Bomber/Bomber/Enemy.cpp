#include "Enemy.h"

 void Enemy::turnToRandomDirection()
{
	direction = Direction(rand() % 4 + 1);
}

 void Enemy::turnLeft()
{
	switch (direction)
	{
	case north:
		direction = west;
		break;

	case east:
		direction = north;
		break;

	case south:
		direction = east;
		break;

	case west:
		direction = south;
		break;
	}
}

 void Enemy::turnRight()
{
	switch (direction)
	{
	case north:
		direction = east;
		break;

	case east:
		direction = south;
		break;

	case south:
		direction = west;
		break;

	case west:
		direction = north;
		break;
	}
}

Enemy::Enemy() {
	status = dead;
	coords = { 0,0 };
	direction = noDir;
	type = blind;
	rottingTime = -1;
}

 Enemy::Enemy(XY & coords, EnemyType type) : type(type), coords(coords) {
	status = alive;
	direction = noDir;
	rottingTime = -1;
}
