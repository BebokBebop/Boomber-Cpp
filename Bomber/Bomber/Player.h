/** @file */


#ifndef PLAYER_H
#define PLAYER_H

#include "Bomb.h"
#include"enumsAndMacros.h"

class Game;
class Player
{
	friend Game;
	XY coords; /**< Koordynaty gracza wzgledem mapy.*/
	EntityStatus status; /**< Status gracza.*/
	int upgrades[5]; /**< Ulepszenia gracza.*/
	//int score; /**< Punkty gracza.*/
	double brokenShieldTimer; /**< Czas po zniszczeniu 'tarczy' przez jaki bedzie ona jeszcze aktywna .*/
	double lastAnimationTime;
	Bomb bombList[MAX_BOMBS]; /**< Tablica zawierajaca bomby postawione przez gracza.*/
	struct bombsID {
		int newestBomb; /**< Indeks najpozniej polozonej i jeszcze aktywnej bomby w tablicy bomb.*/
		int oldestBomb; /**< Indeks najwczesniej polozonej i jeszcze aktywnej bomby w tablicy bomb.*/
		bombsID() { newestBomb = oldestBomb = 0; }
	} bombsID;

	int getBombID(int x, int y)
	{
		int newestID = bombsID.newestBomb;
		int oldestID = bombsID.oldestBomb;
		for (int i = oldestID; i % MAX_BOMBS != newestID; i++) {
			if (bombList[i % MAX_BOMBS].coords.x == x) {
				if (bombList[i % MAX_BOMBS].coords.y == y) {
					return i % MAX_BOMBS;
				}
			}
		}
		return -1; //nie wydarzy siê!
	}

	void damagePlayer()
	{
		if (upgrades[shield]) {
			upgrades[shield] = 0;
			brokenShieldTimer = glfwGetTime();
		}
		else if (glfwGetTime() - brokenShieldTimer > BROKEN_SHIELD_TIME) {
			status = dead;
		}
	}
	void increaseBombFireRange() {
		upgrades[fireRange]++;
	}
	void decreaseBombFireRange() {
		if (upgrades[fireRange] > 2) {
			upgrades[fireRange]--;
		}
	}
	void increaseBombsAvalible() {
		upgrades[bombsAvalible]++;
	}
	void decreaseBombsAvalible() {
		if (upgrades[bombsAvalible] > 1) {
			upgrades[bombsAvalible]--;
		}
	}
	void shieldSwitch() {
		if (upgrades[shield]) {
			upgrades[shield] = 0;
		}
		else {
			upgrades[shield] = 1;
			brokenShieldTimer = -1;
		}
	}
	void kickSwitch() {
		if (upgrades[bombKick])
			upgrades[bombKick] = 0;
		else
			upgrades[bombKick] = 1;
	}

public:
	Player(int gridSize) {
		coords = PLAYER_INITIAL_COORDS;
		status = appearing;

		//@TODO reduce size
		upgrades[noUpgrade] = 0;
		upgrades[fireRange] = 2;
		upgrades[bombsAvalible] = 1;
		upgrades[bombKick] = 0;
		upgrades[shield] = 0;

		//score = 0;
		brokenShieldTimer = -1;
		lastAnimationTime = -1;
	}
	Player(const Player &other) {
		//std::cout << "NIE" << std::endl;
	} //nieu¿ywane
	//Player(int, int);
	//~Player();

};

#endif