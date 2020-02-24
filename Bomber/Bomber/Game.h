/** @file */

#ifndef GAME_H
#define GAME_H

#include <GLFW/glfw3.h>
#include <string>
#include <iostream>
#include "enumsAndMacros.h"
#include "Enemy.h"
#include "Bomb.h""
#include "Player.h"

typedef int sign[8][5];

void error_callback(int error, const char* description);
void translateWord(sign* &signs, std::string word);

struct Map {
	int gridSize;
	tile** bitmap;
	Map();
	Map(int gridSize);
	~Map();
};


class Game
{
	GLFWwindow* window;
	GameStatus gameStatus;
	Player player;
	Enemy enemyArray[MAX_ENEMIES_PER_MAP];
	Map map;
	struct Times {
		int left; /**< Czas, po ktorym gracz zacznie tracic punkty, az sie wyzeruja, po czym gracz umrze. Ten czas jest resetowany po przegraniu lub wygraniu planszy.*/
		int wait;
		double delta;
		double lastMove1;
		double lastMove2;
		double lastMove3;
	}time;

	int score;
	bool portalOpened;
	int highscore;
	int listArray[6] = { 0 }; //wypada?
	struct size {
		int width;
		int height;
	} windowSize;

	struct vars {
		int howManyEnemies;
		int howManyBoxes;
		int howManyUpgrades;
		int gridSize;
		int gameTime;
		int debugMode;
	} vars;

	void generateMap();

	void forceThreeToTwoRatio();

	void setGlLists();
	void unSetGlList();

	int getScore();

	void pauseGame();
	int unPauseGame();


	void setDefaultsIfNecessary();
	static void key_callback(GLFWwindow * window, int key, int scancode, int action, int mods);

#pragma region playerMethods
	void checkPlayerStatus();
	void placeBomb();
	void placeBox();
	void moveInADirectionAndKickIfPossibleAndCollectAnUpgrade(Direction dir);
	void reInitPlayer();
	void resetPlayer();
#pragma endregion

#pragma region bombMethods
	void moveTile(Direction dir, Bomb & currBomb);
	inline void spreadFire(tile & currTile, int & breaker);
	void explodeBombAddPoints(Bomb & bomb);
	inline void takeOffFireLayer(tile & currTile);
	void cleanUp(int currentBombID);
	void moveCheckExplodeAndCleanUpBombs();
#pragma endregion

#pragma region enemyMethods
	void addEnemy(int ID, EnemyType type, XY coords, Direction dir);
	void dropEnemies();
	int moveEnemy(Enemy & enemy, int charge);
	void moveBlind(Enemy & enemy);
	void moveRandom(Enemy & enemy);
	void moveCharger(Enemy & enemy);
	int pointTowardsPlayerIfPossible(Enemy & enemy);
	bool manageEnemiesAndScore();
	void resetEnemyTimes();
#pragma endregion

	void openPortal();
	int waitForGame_over();
	int waitForNextStageAndSumScore();

	void resetTimes();


#pragma region DrawMethods
	struct DrawMethods {
		void square(float R, float G, float B, double x, double y, double sizeX, double sizeY);
		void upgrade(float R, float G, float B, double x, double y, double sizeX, double sizeY);
		void bomb(double x, double y, double sizeX, double sizeY, Bomb& bomb);
		void enemyBlind(float R, float G, float B, double x, double y, double sizeX, double sizeY);
		void enemyRandom(float R, float G, float B, double x, double y, double sizeX, double sizeY);
		void enemyChargerCalm(float R, float G, float B, double x, double y, double sizeX, double sizeY);
		void enemyChargerUpset(float R, float G, float B, double x, double y, double sizeX, double sizeY);
		void enemy(double x, double y, double sizeX, double sizeY, Enemy& enemy);
		void portal(double x, double y, double sizeX, double sizeY, int reset);
	}draw;

	void drawScoreboard();
	void writeStaticData();
	void writeDynamicData();
	void drawGrid();
	void drawGridBase();
	void drawPauseScreen();
	void writePauseMessageScore();
	void writePauseMessage(GameStatus pauseType);
	void drawPlayer();
	void drawAllEnemies();
	void drawBombs();
#pragma endregion

public:

	Game(int howManyEnemies, int howManyBoxes, int howManyUpgrades, int gridSize, int gameTime, int debugMode, int highscore);

	~Game();


	int getHighScore();
	void initGLFW();
	void gameLoop();
};

#endif