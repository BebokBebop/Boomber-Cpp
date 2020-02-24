/** @file */

#ifndef BOMB_H
#define BOMB_H

#include "enumsAndMacros.h"

class Game;
class Player;
class Bomb
{
	friend Player;
	friend Game;
	int range; /**< Zasieg bomby.*/
	int fireReached[4]; /**< Gdzie po wybuchu siegnal ogien bomby w 4 kierunkach.*/
	XY coords; /**< Koordynaty bomby wzgledem mapy.*/
	double explosionTimer; /**< Czas do eksplozji lub czas po eksplozji.*/
	double kickTimer; /**< Kiedy ostatni raz bomba byla przesunieta.*/
	Direction kickDirection; /**< Kierunek przesuwania bomby.*/
	BombStatus status; /**< Status bomby.*/
public:
	Bomb();
	Bomb(int range, XY &coords);
	Bomb(const Bomb& other);
};

#endif