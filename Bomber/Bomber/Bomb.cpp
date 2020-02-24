#include "Bomb.h"

 Bomb::Bomb() {
	range = 0;
	fireReached[0] = 0;
	fireReached[1] = 0;
	fireReached[2] = 0;
	fireReached[3] = 0;
	explosionTimer = -1;
	kickTimer = -1;
	kickDirection = noDir;
	status = empty;
}

 Bomb::Bomb(int range, XY & coords) : range(range), coords(coords) {
	fireReached[4] = { 0 };
	explosionTimer; /**< Czas do eksplozji lub czas po eksplozji.*/
	kickTimer; /**< Kiedy ostatni raz bomba byla przesunieta.*/
	kickDirection = noDir; /**< Kierunek przesuwania bomby.*/
	status = placed;

}

Bomb::Bomb(const Bomb & other) {
	range = other.range;
	fireReached[0] = other.fireReached[0];
	fireReached[1] = other.fireReached[1];
	fireReached[2] = other.fireReached[2];
	fireReached[3] = other.fireReached[3];
	coords.x = other.coords.x;
	coords.y = other.coords.y;
	explosionTimer = other.explosionTimer;
	kickTimer = other.kickTimer;
	kickDirection = other.kickDirection;
	status = other.status;
}
