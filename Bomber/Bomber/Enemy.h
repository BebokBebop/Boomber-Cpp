/** @file */

#ifndef ENEMY_H
#define ENEMY_H

#include <cstdlib>
#include "enumsAndMacros.h"

class Game; 
struct DrawMethods;
class Enemy
{
	friend Game;
	friend DrawMethods;
	EntityStatus status; /**< Status przeciwnika.*/
	XY coords; /**< Koordynaty przeciwnika wzgledem mapy.*/
	Direction direction; /**< Kierunek poruszania sie przeciwnika.*/
	EnemyType type; /**< Typ przeciwnika.*/
	double rottingTime; /**< Jak dlugo nalezy rysowac zwloki przeciwnika po jego smierci.*/

	void turnToRandomDirection();

	void turnLeft();

	void turnRight();

public:
	Enemy();

	Enemy(XY &coords, EnemyType type);

	~Enemy() {}
};


#endif