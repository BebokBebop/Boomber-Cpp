/** @file */

#include <GLFW/glfw3.h>
#include "Game.h"
#include <cstdlib>
#include <string>
#include <iostream>
#include <ctime>
#include <fstream>

void check_param(int &argc, char** &argv, int &howManyEnemies, int &howManyBoxes,
	int &howManyUpgrades, int &gridSize, int &gameTime, int &debugMode) {

	std::string help = "Wpisz \"[Nazwa_Programu] -e [ilosc przeciwnikow (15 > x > 1)] \n-b [ilosc pudelek (< 3/4 * (wielkosc mapy)^2) - ilosc przeciwnikow]\n-u [ilosc ulepszen (< ilosc pudelek]\n-s [wielkosc mapy (>=7)]\n-t [czas gry w sekundach] \n-d [debug mode <0-1>]\"";

	std::string badUse = "Zle uzycie.\nWpisz: \"[Nazwa_Programu] -h\"\nlub \"[Nazwa_Programu] help\",\nzeby otrzymac pomoc.\n";

	std::string errorZwrot = "";

	std::string przelaczniki = "hebustd";
	int zleWartosci[7] = { 0 };
	int ileRazyPrzelacznik[7] = { 0 };


	if (argc == 1) {
		throw("Nie wykryto przelacznikow.\nUzyto wartosci domyslnych\n");
	}
	for (int i = 1; i < argc; ++i) {
		if (!strcmp(argv[i], "-e")) {
			ileRazyPrzelacznik[1]++;
			if (++i >= argc) {
				throw(badUse);
			}
			else {
				if (!(howManyEnemies = atoi(argv[i]))) {
					zleWartosci[1] = 1;
				}
				else if (howManyEnemies < 1) {
					howManyEnemies = 4;
					zleWartosci[1] = 2;
				}
			}
		}

		else if (!strcmp(argv[i], "-b")) {
			ileRazyPrzelacznik[2]++;
			if (++i >= argc) {
				throw(badUse);
			}
			else {
				if (!(howManyBoxes = atoi(argv[i]))) {
					zleWartosci[2] = 1;
				}
			}
		}

		else if (!strcmp(argv[i], "-u")) {
			ileRazyPrzelacznik[3]++;
			if (++i >= argc) {
				throw(badUse);
			}
			else {
				if (!(howManyUpgrades = atoi(argv[i]))) {
					zleWartosci[3] = 1;
				}
			}
		}

		else if (!strcmp(argv[i], "-s")) {
			ileRazyPrzelacznik[4]++;
			if (++i >= argc) {
				throw(badUse);
			}
			else {
				if (!(gridSize = atoi(argv[i]))) {
					zleWartosci[4] = 1;
				}
				if ((gridSize + 1) % 4 != 0 && gridSize < 7) {
					gridSize = 11;
					zleWartosci[4] = 2;
				}
			}
		}
		else if (!strcmp(argv[i], "-t")) {
			ileRazyPrzelacznik[5]++;
			if (++i >= argc) {
				throw(badUse);
			}
			else {
				if (!(gameTime = atoi(argv[i]))) {
					zleWartosci[5] = 1;
				}
				if (gameTime < 10) {
					gameTime = 60.9999;
					zleWartosci[5] = 2;
				}
			}
		}
		else if (!strcmp(argv[i], "-d")) {
			ileRazyPrzelacznik[6]++;
			if (++i >= argc) {
				throw(badUse);
			}
			else {
				debugMode = atoi(argv[i]); //bedzie dzialac dla byle czego, ale nie zaszkodzi
				if (debugMode != 1 && debugMode != 0) {
					debugMode = 0;
					zleWartosci[6] = 1;
				}
			}
		}
		else if (!strcmp(argv[i], "help") || !strcmp(argv[i], "-h")) {
			throw(help);
		}
		else {
			throw(badUse);
		}
	}

	if (gridSize > MAX_GRID_SIZE) {
		gridSize = -1;
		zleWartosci[4] = 2;
	}

	if (gridSize != -1) {
		if (howManyEnemies != -1) {
			if (howManyEnemies > 0.75 * gridSize* gridSize || howManyEnemies > MAX_ENEMIES_PER_MAP) {
				zleWartosci[1] = 2;
				howManyEnemies = -1;
			}
		}
		if (howManyBoxes != -1) {
			if (howManyBoxes > 3.0 / 4.0 * gridSize* gridSize - howManyEnemies) {
				zleWartosci[2] = 2;
				howManyBoxes = -1;
			}
		}
	}
	if (howManyBoxes != -1) {
		if (howManyUpgrades != -1) {
			if (howManyUpgrades > howManyBoxes) {
				zleWartosci[3] = 2;
				howManyUpgrades = -1;
			}
		}
	}


	for (int i = 0; i < 6; i++) {
		if (ileRazyPrzelacznik[i] > 1) {
			errorZwrot += ">Przelacznik [-";
			errorZwrot += przelaczniki[i];
			errorZwrot += "] zostal uzyty wiecej niz raz\n\tUzyto domyslnej wartosci\n";
		}
		else {
			if (zleWartosci[i] == 1) {
				errorZwrot += ">wartosc po \"-";
				errorZwrot += przelaczniki[i];
				errorZwrot += "\" nie jest poprawnie zapisana liczba\n\tUzyto domyslnej wartosci\n";
			}
			else if (zleWartosci[i] == 2) {
				errorZwrot += ">wartosc po \"-";
				errorZwrot += przelaczniki[i];
				errorZwrot += "\" jest poza zakresem\n\tUzyto wartosci domyslnej\n";
			}
		}
	}

	if (errorZwrot != "")
		throw errorZwrot;
}

int getHighscore(std::ifstream &in) {
	char buffer[16]; // HIGHSCORE:_XXXX\0
	in >> buffer;
	int highscore = 0;
	in >> highscore;

	//int highscore = atoi(buffer + 11);
	return highscore;
}

void setHighscore(int score, std::ofstream &out) {
	out << "HIGHSCORE: " << score;
}

int main(int argc, char ** argv) {
	time_t tt;
	srand(std::time(&tt));

	//zmienne do ustawienia parametrycznie
	int howManyEnemies = -1;
	int howManyBoxes = -1;
	int howManyUpgrades = -1;
	int gridSize = -1;
	int gameTime = -1;
	int debugMode = -1;

	//wczytaj z parametrow - jesli cos nie tak, to wyswietl co
	try
	{
		check_param(argc, argv, howManyEnemies, howManyBoxes, howManyUpgrades,
			gridSize, gameTime, debugMode);
	}
	catch (std::string errorZwrot)
	{
		std::cout << errorZwrot;
		return 0;
	}
	catch (...) {};

	//wczytaj highscore z pliku jesli sie da
	int highscore = 0;
	std::ifstream file("high score.txt");

	if (!file.is_open()) { //jeœli nie by³o, to stwórz nowy i zamknij
		std::ofstream file2("high score.txt");
		highscore = 0;
		file2.close();
	}
	else {
		highscore = getHighscore(file);
	}
	file.close();


	//ktoras zmienna nieustawiona parametrem
	Game game(howManyEnemies, howManyBoxes, howManyUpgrades,
		gridSize, gameTime, debugMode, highscore);

	try
	{
		game.initGLFW();
	}
	catch (std::string error)
	{
		std::cout << error << std::endl;
		return 0;
	}
	catch (...) {}

	game.gameLoop();
	std::ofstream file2("high score.txt");
	setHighscore(game.getHighScore(), file2);

	return 0;
}
