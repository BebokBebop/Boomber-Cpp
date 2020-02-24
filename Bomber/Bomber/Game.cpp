#include "Game.h"

void error_callback(int error, const char * description)
{
	std::cerr << "Error: " << description << std::endl;
}

void translateWord(sign *& signs, std::string word) {
	int wordSize = word.length();
	signs = new sign[wordSize];
	for (int i = 0; i < wordSize; ++i) {
		switch (word[i]) { //literownik
		case '0': {
			int ncharacterArray[8][5] = {
				{ 0, 1, 1, 1, 0 },
			{ 1, 0, 0, 1, 1 },
			{ 1, 0, 0, 1, 1 },
			{ 1, 0, 1, 0, 1 },
			{ 1, 0, 1, 0, 1 },
			{ 1, 1, 0, 0, 1 },
			{ 1, 1, 0, 0, 1 },
			{ 0, 1, 1, 1, 0 },
			};
			for (int j = 0; j < 8; j++) { for (int k = 0; k < 5; k++) { signs[i][j][k] = ncharacterArray[j][k]; } }
			break;
		}
		case '1': {
			int ncharacterArray[8][5] = {
				{ 0, 0, 1, 0, 0 },
			{ 0, 1, 1, 0, 0 },
			{ 1, 0, 1, 0, 0 },
			{ 0, 0, 1, 0, 0 },
			{ 0, 0, 1, 0, 0 },
			{ 0, 0, 1, 0, 0 },
			{ 0, 0, 1, 0, 0 },
			{ 1, 1, 1, 1, 1 },
			};

			for (int j = 0; j < 8; j++) { for (int k = 0; k < 5; k++) { signs[i][j][k] = ncharacterArray[j][k]; } }
			break;
		}
		case '2': {
			int ncharacterArray[8][5] = {
				{ 0, 1, 1, 1, 0 },
			{ 1, 0, 0, 0, 1 },
			{ 1, 0, 0, 0, 1 },
			{ 0, 0, 0, 1, 0 },
			{ 0, 0, 1, 0, 0 },
			{ 0, 1, 0, 0, 0 },
			{ 1, 0, 0, 0, 0 },
			{ 1, 1, 1, 1, 1 },
			};

			for (int j = 0; j < 8; j++) { for (int k = 0; k < 5; k++) { signs[i][j][k] = ncharacterArray[j][k]; } }
			break;
		}
		case '3': {
			int ncharacterArray[8][5] = {
				{ 0, 1, 1, 1, 0 },
			{ 1, 0, 0, 0, 1 },
			{ 0, 0, 0, 0, 1 },
			{ 0, 0, 1, 1, 0 },
			{ 0, 0, 0, 0, 1 },
			{ 0, 0, 0, 0, 1 },
			{ 1, 0, 0, 0, 1 },
			{ 0, 1, 1, 1, 0 },
			};

			for (int j = 0; j < 8; j++) { for (int k = 0; k < 5; k++) { signs[i][j][k] = ncharacterArray[j][k]; } }
			break;
		}
		case '4': {
			int ncharacterArray[8][5] = {
				{ 0, 0, 0, 1, 1 },
			{ 0, 0, 1, 0, 1 },
			{ 0, 1, 0, 0, 1 },
			{ 1, 0, 0, 0, 1 },
			{ 1, 1, 1, 1, 1 },
			{ 0, 0, 0, 0, 1 },
			{ 0, 0, 0, 0, 1 },
			{ 0, 0, 0, 0, 1 },
			};

			for (int j = 0; j < 8; j++) { for (int k = 0; k < 5; k++) { signs[i][j][k] = ncharacterArray[j][k]; } }
			break;
		}
		case '5': {
			int ncharacterArray[8][5] = {
				{ 1, 1, 1, 1, 1 },
			{ 1, 0, 0, 0, 0 },
			{ 1, 0, 0, 0, 0 },
			{ 1, 1, 1, 1, 0 },
			{ 0, 0, 0, 0, 1 },
			{ 0, 0, 0, 0, 1 },
			{ 1, 0, 0, 0, 1 },
			{ 0, 1, 1, 1, 0 },
			};

			for (int j = 0; j < 8; j++) { for (int k = 0; k < 5; k++) { signs[i][j][k] = ncharacterArray[j][k]; } }
			break;
		}
		case '6': {
			int ncharacterArray[8][5] = {
				{ 0, 1, 1, 1, 0 },
			{ 1, 0, 0, 0, 1 },
			{ 1, 0, 0, 0, 0 },
			{ 1, 1, 1, 1, 0 },
			{ 1, 0, 0, 0, 1 },
			{ 1, 0, 0, 0, 1 },
			{ 1, 0, 0, 0, 1 },
			{ 0, 1, 1, 1, 0 },
			};

			for (int j = 0; j < 8; j++) { for (int k = 0; k < 5; k++) { signs[i][j][k] = ncharacterArray[j][k]; } }
			break;
		}
		case '7': {
			int ncharacterArray[8][5] = {
				{ 1, 1, 1, 1, 1 },
			{ 0, 0, 0, 0, 1 },
			{ 0, 0, 0, 0, 1 },
			{ 0, 0, 0, 1, 0 },
			{ 0, 0, 0, 1, 0 },
			{ 0, 0, 1, 0, 0 },
			{ 0, 0, 1, 0, 0 },
			{ 0, 0, 1, 0, 0 },
			};

			for (int j = 0; j < 8; j++) { for (int k = 0; k < 5; k++) { signs[i][j][k] = ncharacterArray[j][k]; } }
			break;
		}
		case '8': {
			int ncharacterArray[8][5] = {
				{ 0, 1, 1, 1, 0 },
			{ 1, 0, 0, 0, 1 },
			{ 1, 0, 0, 0, 1 },
			{ 0, 1, 1, 1, 0 },
			{ 1, 0, 0, 0, 1 },
			{ 1, 0, 0, 0, 1 },
			{ 1, 0, 0, 0, 1 },
			{ 0, 1, 1, 1, 0 },
			};

			for (int j = 0; j < 8; j++) { for (int k = 0; k < 5; k++) { signs[i][j][k] = ncharacterArray[j][k]; } }
			break;
		}
		case '9': {
			int ncharacterArray[8][5] = {
				{ 0, 1, 1, 1, 0 },
			{ 1, 0, 0, 0, 1 },
			{ 1, 0, 0, 0, 1 },
			{ 0, 1, 1, 1, 1 },
			{ 0, 0, 0, 0, 1 },
			{ 0, 0, 0, 0, 1 },
			{ 1, 0, 0, 0, 1 },
			{ 0, 1, 1, 1, 0 },
			};

			for (int j = 0; j < 8; j++) { for (int k = 0; k < 5; k++) { signs[i][j][k] = ncharacterArray[j][k]; } }
			break;
		}
		case 'S': {
			int ncharacterArray[8][5] = {
				{ 0, 1, 1, 1, 0 },
			{ 1, 0, 0, 0, 1 },
			{ 1, 0, 0, 0, 1 },
			{ 0, 1, 1, 0, 0 },
			{ 0, 0, 0, 1, 0 },
			{ 1, 0, 0, 0, 1 },
			{ 1, 0, 0, 0, 1 },
			{ 0, 1, 1, 1, 0 },
			};

			for (int j = 0; j < 8; j++) { for (int k = 0; k < 5; k++) { signs[i][j][k] = ncharacterArray[j][k]; } }
			break;
		}
		case 'C': {
			int ncharacterArray[8][5] = {
				{ 0, 1, 1, 1, 0 },
			{ 1, 0, 0, 0, 1 },
			{ 1, 0, 0, 0, 0 },
			{ 1, 0, 0, 0, 0 },
			{ 1, 0, 0, 0, 0 },
			{ 1, 0, 0, 0, 0 },
			{ 1, 0, 0, 0, 1 },
			{ 0, 1, 1, 1, 0 },
			};

			for (int j = 0; j < 8; j++) { for (int k = 0; k < 5; k++) { signs[i][j][k] = ncharacterArray[j][k]; } }
			break;
		}
		case 'O': {
			int ncharacterArray[8][5] = {
				{ 0, 1, 1, 1, 0 },
			{ 1, 0, 0, 0, 1 },
			{ 1, 0, 0, 0, 1 },
			{ 1, 0, 0, 0, 1 },
			{ 1, 0, 0, 0, 1 },
			{ 1, 0, 0, 0, 1 },
			{ 1, 0, 0, 0, 1 },
			{ 0, 1, 1, 1, 0 },
			};

			for (int j = 0; j < 8; j++) { for (int k = 0; k < 5; k++) { signs[i][j][k] = ncharacterArray[j][k]; } }
			break;
		}
		case 'R': {
			int ncharacterArray[8][5] = {
				{ 1, 1, 1, 1, 0 },
			{ 1, 0, 0, 0, 1 },
			{ 1, 0, 0, 0, 1 },
			{ 1, 1, 1, 1, 0 },
			{ 1, 0, 1, 0, 0 },
			{ 1, 0, 0, 1, 0 },
			{ 1, 0, 0, 0, 1 },
			{ 1, 0, 0, 0, 1 },
			};

			for (int j = 0; j < 8; j++) { for (int k = 0; k < 5; k++) { signs[i][j][k] = ncharacterArray[j][k]; } }
			break;
		}
		case 'E': {
			int ncharacterArray[8][5] = {
				{ 1, 1, 1, 1, 1 },
			{ 1, 0, 0, 0, 0 },
			{ 1, 0, 0, 0, 0 },
			{ 1, 1, 1, 1, 0 },
			{ 1, 0, 0, 0, 0 },
			{ 1, 0, 0, 0, 0 },
			{ 1, 0, 0, 0, 0 },
			{ 1, 1, 1, 1, 1 },
			};

			for (int j = 0; j < 8; j++) { for (int k = 0; k < 5; k++) { signs[i][j][k] = ncharacterArray[j][k]; } }
			break;
		}
		case 'T': {
			int ncharacterArray[8][5] = {
				{ 1, 1, 1, 1, 1 },
			{ 0, 0, 1, 0, 0 },
			{ 0, 0, 1, 0, 0 },
			{ 0, 0, 1, 0, 0 },
			{ 0, 0, 1, 0, 0 },
			{ 0, 0, 1, 0, 0 },
			{ 0, 0, 1, 0, 0 },
			{ 0, 0, 1, 0, 0 },
			};

			for (int j = 0; j < 8; j++) { for (int k = 0; k < 5; k++) { signs[i][j][k] = ncharacterArray[j][k]; } }
			break;
		}
		case 'I': {
			int ncharacterArray[8][5] = {
				{ 0, 1, 1, 1, 0 },
			{ 0, 0, 1, 0, 0 },
			{ 0, 0, 1, 0, 0 },
			{ 0, 0, 1, 0, 0 },
			{ 0, 0, 1, 0, 0 },
			{ 0, 0, 1, 0, 0 },
			{ 0, 0, 1, 0, 0 },
			{ 0, 1, 1, 1, 0 },
			};

			for (int j = 0; j < 8; j++) { for (int k = 0; k < 5; k++) { signs[i][j][k] = ncharacterArray[j][k]; } }
			break;
		}
		case 'M': {
			int ncharacterArray[8][5] = {
				{ 1, 0, 0, 0, 1 },
			{ 1, 1, 0, 1, 1 },
			{ 1, 0, 1, 0, 1 },
			{ 1, 0, 0, 0, 1 },
			{ 1, 0, 0, 0, 1 },
			{ 1, 0, 0, 0, 1 },
			{ 1, 0, 0, 0, 1 },
			{ 1, 0, 0, 0, 1 },
			};

			for (int j = 0; j < 8; j++) { for (int k = 0; k < 5; k++) { signs[i][j][k] = ncharacterArray[j][k]; } }
			break;
		}
		case ' ': {
			int ncharacterArray[8][5] = {
				{ 0, 0, 0, 0, 0 },
			{ 0, 0, 0, 0, 0 },
			{ 0, 0, 0, 0, 0 },
			{ 0, 0, 0, 0, 0 },
			{ 0, 0, 0, 0, 0 },
			{ 0, 0, 0, 0, 0 },
			{ 0, 0, 0, 0, 0 },
			{ 0, 0, 0, 0, 0 },
			};

			for (int j = 0; j < 8; j++) { for (int k = 0; k < 5; k++) { signs[i][j][k] = ncharacterArray[j][k]; } }
			break;
		}
		case 'P': {
			int ncharacterArray[8][5] = {
				{ 1, 1, 1, 1, 0 },
			{ 1, 0, 0, 0, 1 },
			{ 1, 0, 0, 0, 1 },
			{ 1, 1, 1, 1, 0 },
			{ 1, 0, 0, 0, 0 },
			{ 1, 0, 0, 0, 0 },
			{ 1, 0, 0, 0, 0 },
			{ 1, 0, 0, 0, 0 },
			};

			for (int j = 0; j < 8; j++) { for (int k = 0; k < 5; k++) { signs[i][j][k] = ncharacterArray[j][k]; } }
			break;
		}
		case 'A': {
			int ncharacterArray[8][5] = {
				{ 0, 0, 1, 0, 0 },
			{ 0, 1, 0, 1, 0 },
			{ 1, 0, 0, 0, 1 },
			{ 1, 0, 0, 0, 1 },
			{ 1, 1, 1, 1, 1 },
			{ 1, 0, 0, 0, 1 },
			{ 1, 0, 0, 0, 1 },
			{ 1, 0, 0, 0, 1 },
			};

			for (int j = 0; j < 8; j++) { for (int k = 0; k < 5; k++) { signs[i][j][k] = ncharacterArray[j][k]; } }
			break;
		}
		case 'U': {
			int ncharacterArray[8][5] = {
				{ 1, 0, 0, 0, 1 },
			{ 1, 0, 0, 0, 1 },
			{ 1, 0, 0, 0, 1 },
			{ 1, 0, 0, 0, 1 },
			{ 1, 0, 0, 0, 1 },
			{ 1, 0, 0, 0, 1 },
			{ 1, 0, 0, 0, 1 },
			{ 0, 1, 1, 1, 0 },
			};

			for (int j = 0; j < 8; j++) { for (int k = 0; k < 5; k++) { signs[i][j][k] = ncharacterArray[j][k]; } }
			break;
		}
		case 'D': {
			int ncharacterArray[8][5] = {
				{ 1, 1, 1, 1, 0 },
			{ 1, 0, 0, 0, 1 },
			{ 1, 0, 0, 0, 1 },
			{ 1, 0, 0, 0, 1 },
			{ 1, 0, 0, 0, 1 },
			{ 1, 0, 0, 0, 1 },
			{ 1, 0, 0, 0, 1 },
			{ 1, 1, 1, 1, 0 },
			};

			for (int j = 0; j < 8; j++) { for (int k = 0; k < 5; k++) { signs[i][j][k] = ncharacterArray[j][k]; } }
			break;
		}
		case 'H': {
			int ncharacterArray[8][5] = {
				{ 1, 0, 0, 0, 1 },
			{ 1, 0, 0, 0, 1 },
			{ 1, 0, 0, 0, 1 },
			{ 1, 1, 1, 1, 1 },
			{ 1, 0, 0, 0, 1 },
			{ 1, 0, 0, 0, 1 },
			{ 1, 0, 0, 0, 1 },
			{ 1, 0, 0, 0, 1 },
			};

			for (int j = 0; j < 8; j++) { for (int k = 0; k < 5; k++) { signs[i][j][k] = ncharacterArray[j][k]; } }
			break;
		}
		case 'L': {
			int ncharacterArray[8][5] = {
				{ 1, 0, 0, 0, 0 },
			{ 1, 0, 0, 0, 0 },
			{ 1, 0, 0, 0, 0 },
			{ 1, 0, 0, 0, 0 },
			{ 1, 0, 0, 0, 0 },
			{ 1, 0, 0, 0, 0 },
			{ 1, 0, 0, 0, 0 },
			{ 1, 1, 1, 1, 1 },
			};

			for (int j = 0; j < 8; j++) { for (int k = 0; k < 5; k++) { signs[i][j][k] = ncharacterArray[j][k]; } }
			break;
		}
		case 'G': {
			int ncharacterArray[8][5] = {
				{ 0, 1, 1, 1, 0 },
			{ 1, 0, 0, 0, 1 },
			{ 1, 0, 0, 0, 0 },
			{ 1, 0, 0, 0, 0 },
			{ 1, 0, 1, 1, 1 },
			{ 1, 0, 0, 0, 1 },
			{ 1, 0, 0, 0, 1 },
			{ 0, 1, 1, 1, 0 },
			};

			for (int j = 0; j < 8; j++) { for (int k = 0; k < 5; k++) { signs[i][j][k] = ncharacterArray[j][k]; } }
			break;
		}
		case 'V': {
			int ncharacterArray[8][5] = {
				{ 1, 0, 0, 0, 1 },
			{ 1, 0, 0, 0, 1 },
			{ 1, 0, 0, 0, 1 },
			{ 1, 0, 0, 0, 1 },
			{ 1, 0, 0, 0, 1 },
			{ 1, 0, 0, 0, 1 },
			{ 0, 1, 0, 1, 0 },
			{ 0, 0, 1, 0, 0 },
			};

			for (int j = 0; j < 8; j++) { for (int k = 0; k < 5; k++) { signs[i][j][k] = ncharacterArray[j][k]; } }
			break;
		}
		case '!': {
			int ncharacterArray[8][5] = {
				{ 0, 0, 1, 0, 0 },
			{ 0, 0, 1, 0, 0 },
			{ 0, 0, 1, 0, 0 },
			{ 0, 0, 1, 0, 0 },
			{ 0, 0, 1, 0, 0 },
			{ 0, 0, 1, 0, 0 },
			{ 0, 0, 0, 0, 0 },
			{ 0, 0, 1, 0, 0 },
			};

			for (int j = 0; j < 8; j++) { for (int k = 0; k < 5; k++) { signs[i][j][k] = ncharacterArray[j][k]; } }
			break;
		}
		case 'N': {
			int ncharacterArray[8][5] = {
				{ 1, 0, 0, 0, 1 },
			{ 1, 1, 0, 0, 1 },
			{ 1, 1, 0, 0, 1 },
			{ 1, 0, 1, 0, 1 },
			{ 1, 0, 1, 0, 1 },
			{ 1, 0, 0, 1, 1 },
			{ 1, 0, 0, 1, 1 },
			{ 1, 0, 0, 0, 1 },
			};

			for (int j = 0; j < 8; j++) { for (int k = 0; k < 5; k++) { signs[i][j][k] = ncharacterArray[j][k]; } }
			break;
		}
		case ':': {
			int ncharacterArray[8][5] = {
				{ 0, 0, 0, 0, 0 },
			{ 0, 0, 0, 0, 0 },
			{ 0, 0, 1, 0, 0 },
			{ 0, 0, 0, 0, 0 },
			{ 0, 0, 0, 0, 0 },
			{ 0, 0, 1, 0, 0 },
			{ 0, 0, 0, 0, 0 },
			{ 0, 0, 0, 0, 0 },
			};

			for (int j = 0; j < 8; j++) { for (int k = 0; k < 5; k++) { signs[i][j][k] = ncharacterArray[j][k]; } }
			break;
		}
		case 'W': {
			int ncharacterArray[8][5] = {
				{ 1, 0, 0, 0, 1 },
			{ 1, 0, 0, 0, 1 },
			{ 1, 0, 0, 0, 1 },
			{ 1, 0, 0, 0, 1 },
			{ 1, 0, 0, 0, 1 },
			{ 1, 0, 1, 0, 1 },
			{ 1, 1, 0, 1, 1 },
			{ 1, 0, 0, 0, 1 },
			};

			for (int j = 0; j < 8; j++) { for (int k = 0; k < 5; k++) { signs[i][j][k] = ncharacterArray[j][k]; } }
			break;
		}
		case 'Y': {
			int ncharacterArray[8][5] = {
				{ 1, 0, 0, 0, 1 },
			{ 1, 0, 0, 0, 1 },
			{ 1, 0, 0, 0, 1 },
			{ 0, 1, 0, 1, 0 },
			{ 0, 0, 1, 0, 0 },
			{ 0, 0, 1, 0, 0 },
			{ 0, 0, 1, 0, 0 },
			{ 0, 0, 1, 0, 0 },
			};

			for (int j = 0; j < 8; j++) { for (int k = 0; k < 5; k++) { signs[i][j][k] = ncharacterArray[j][k]; } }
			break;
		}
		}
	}
}

Map::Map() {
	bitmap = nullptr;
	gridSize = 0;
}

 Map::Map(int gridSize) : gridSize(gridSize) {
	bitmap = new tile*[gridSize];
	for (int i = 0; i < gridSize; i++)
	{
		bitmap[i] = new tile[gridSize];
	}
}

 Map::~Map() {
	for (int i = 0; i < gridSize; i++) {
		delete bitmap[i];
	}
	delete bitmap;
}

void Game::generateMap()
{
	//przesuna³em srand do maina
	int upg = vars.howManyUpgrades;
	int upgType;
	int x, y;
	for (int i = 0; i < vars.gridSize; i++) {
		for (int j = 0; j < vars.gridSize; j++) {
			if (i % 2 && j % 2) {
				map.bitmap[i][j].type = pillarTile;
			}
			else {
				map.bitmap[i][j].type = pathTile;
			}
			map.bitmap[i][j].fireLayers = 0;
			map.bitmap[i][j].upgrade = upgrades(noUpgrade);
		}
	}
	for (int i = 0; i < vars.howManyBoxes; i++) {
		x = rand() % vars.gridSize;
		y = rand() % vars.gridSize;
		if ((x < 2) && (y > vars.gridSize - 3)) { //miejsce dla gracza
			i--;
			continue;
		}
		if (x % 2 && y % 2) { //kolumna 
			i--;
			continue;
		}
		if (map.bitmap[x][y].type == boxTile) { //juz zajete
			i--;
			continue;
		}
		if (upg) {
			upg--;
			upgType = rand() % 100;
			if (upgType < 40) {
				map.bitmap[x][y].upgrade = fireRange;
			}
			else if (upgType < 80) {
				map.bitmap[x][y].upgrade = bombsAvalible;
			}
			else if (upgType < 90) {
				map.bitmap[x][y].upgrade = bombKick;
			}
			else {
				map.bitmap[x][y].upgrade = shield;
			}
		}

		map.bitmap[x][y].type = boxTile;
	}

}

 void Game::forceThreeToTwoRatio()
{
	glfwGetFramebufferSize(window, &(windowSize.width), &(windowSize.height));
	if (windowSize.width / 3 > windowSize.height / 2) {
		glfwSetWindowSize(window, windowSize.height / 2 * 3, windowSize.height);
	}
	else if (windowSize.width / 3 < windowSize.height / 2) {
		glfwSetWindowSize(window, windowSize.width, windowSize.width / 3 * 2);
	}
}

 void Game::setGlLists() {
	listArray[0] = glGenLists(1);
	glNewList(listArray[0], GL_COMPILE);
	drawScoreboard();
	writeStaticData();
	glEndList();

	listArray[5] = glGenLists(1);
	glNewList(listArray[5], GL_COMPILE);
	drawGridBase();
	glEndList();

	listArray[startPause] = glGenLists(1);
	glNewList(listArray[startPause], GL_COMPILE);
	drawPauseScreen();
	writePauseMessage(startPause);
	glEndList();

	listArray[stopPause] = glGenLists(1);
	glNewList(listArray[stopPause], GL_COMPILE);
	drawPauseScreen();
	writePauseMessage(stopPause);
	glEndList();

	listArray[gameOverPause] = glGenLists(1);
	glNewList(listArray[gameOverPause], GL_COMPILE);
	drawPauseScreen();
	writePauseMessage(gameOverPause);
	glEndList();

	listArray[wonPause] = glGenLists(1);
	glNewList(listArray[wonPause], GL_COMPILE);
	drawPauseScreen();
	writePauseMessage(wonPause);
	glEndList();

}

 void Game::unSetGlList() {
	for (int i = 0; i < 5; i++) {
		glDeleteLists(listArray[i], 1);
		listArray[i] = 0;
	}
}

 int Game::getScore()
{
	if (score > 9999) {
		score = 9999;
	}
	return score;
}

 void Game::pauseGame() {

	if (gameStatus != playing) {
		return;
	}
	gameStatus = stopPause;
	time.delta = glfwGetTime();
}

 int Game::unPauseGame() {
	if (gameStatus == playing) {
		return 0;
	}
	gameStatus = playing;
	glfwSetTime(time.delta);
	return 1;
}

void Game::setDefaultsIfNecessary()
{
	if (vars.gridSize == -1) {
		vars.gridSize = DEFAULT_GRID_SIZE;
	}
	else if (vars.gridSize > MAX_GRID_SIZE) {
		vars.gridSize = MAX_GRID_SIZE;
	}
	if (vars.gameTime == -1) {
		vars.gameTime = DEFAULT_GAME_TIME;
	}
	if (vars.debugMode == -1) {
		vars.debugMode = DEFAULT_DEBUG_MODE;
	}
	if (vars.howManyEnemies == -1) {
		if (vars.gridSize != DEFAULT_GRID_SIZE) {
			vars.howManyEnemies = (0.42 * vars.gridSize* vars.gridSize) / 5;
		}
		else {
			vars.howManyEnemies = DEFAULT_ENEMIES_COUNT;
		}
	}
	if (vars.howManyEnemies > MAX_ENEMIES_PER_MAP) {
		vars.howManyEnemies = MAX_ENEMIES_PER_MAP;
	}
	if (vars.howManyBoxes > 0.75 * vars.gridSize * vars.gridSize - vars.howManyEnemies || vars.howManyBoxes == -1) {
		vars.howManyBoxes = (0.6 * vars.gridSize * vars.gridSize) / 1.8;
	}
	if (vars.howManyUpgrades == -1) {
		vars.howManyUpgrades = vars.howManyBoxes / 5;
	}
}

 void Game::key_callback(GLFWwindow * window, int key, int scancode, int action, int mods)
{
	if (action == GLFW_RELEASE)
	{
		return;
	}
	Game* game = (Game*)glfwGetWindowUserPointer(window);
	if (key == GLFW_KEY_ESCAPE) {
		glfwSetWindowShouldClose(window, GLFW_TRUE);
	}
	else if (key == GLFW_KEY_UP) {
		game->moveInADirectionAndKickIfPossibleAndCollectAnUpgrade(north);
	}
	else if (key == GLFW_KEY_DOWN) {
		game->moveInADirectionAndKickIfPossibleAndCollectAnUpgrade(south);
	}
	else if (key == GLFW_KEY_RIGHT) {
		game->moveInADirectionAndKickIfPossibleAndCollectAnUpgrade(east);
	}
	else if (key == GLFW_KEY_LEFT) {
		game->moveInADirectionAndKickIfPossibleAndCollectAnUpgrade(west);
	}
	else if (key == GLFW_KEY_SPACE) {
		if (!game->unPauseGame()) {
			game->placeBomb();
		}
	}
	else if (key == GLFW_KEY_P) {
		game->pauseGame();
	}

	else if (game->vars.debugMode) {
		if (key == GLFW_KEY_LEFT_CONTROL) {
			game->placeBox();
		}
		else if (key == GLFW_KEY_Q) {
			game->player.increaseBombFireRange();
		}
		else if (key == GLFW_KEY_A) {
			game->player.decreaseBombFireRange();
		}
		else if (key == GLFW_KEY_S) {
			game->player.shieldSwitch();
		}
		else if (key == GLFW_KEY_W) {
			game->player.kickSwitch();
		}
		else if (key == GLFW_KEY_E) {
			game->player.increaseBombsAvalible();
		}
		else if (key == GLFW_KEY_D) {
			game->player.decreaseBombsAvalible();
		}
		else if (key == GLFW_KEY_R && action) {
			game->openPortal();
		}
	}
}

 void Game::checkPlayerStatus()
{
	double timeNow = glfwGetTime();
	if (player.status == appearing) {
		if (player.lastAnimationTime == -1) {
			player.lastAnimationTime = timeNow + PLAYER_APPEAR_TIME;
		}
		else {
			if (player.lastAnimationTime - timeNow <= 0) { //animacja pojawiania sie skonczyla
				player.status = alive;
				player.lastAnimationTime = -1;
			}
		}
	}
	else if (player.status != alive) { //nie nalezy sprawdzac gracza, ktory sie pojawia, jest martwy lub wszedl do portalu
		return;
	}

	if (map.bitmap[player.coords.x][player.coords.y].type == fireTile
		|| map.bitmap[player.coords.x][player.coords.y].type == enemyTile
		|| map.bitmap[player.coords.x][player.coords.y].type == firedBox) {
		player.damagePlayer();
	}
	else if (map.bitmap[player.coords.x][player.coords.y].type == portalTile) {
		player.status = winning;
		score += 1000;
	}
	else if (time.left > 0) {
		time.left = vars.gameTime - timeNow;
		if (time.left <= 0) {
			time.left = 0;
			player.lastAnimationTime = timeNow;
		}
	}
	else if (score >= 10) {
		if (timeNow - player.lastAnimationTime > SCORE_DROP_FREQUENCY) {
			player.lastAnimationTime = timeNow;
			score *= SCORE_PROCENT_PER_DROP;
		}
	}
	else if (timeNow - player.lastAnimationTime > SCORE_DROP_FREQUENCY) {
		score = 0;
		player.status = dead;
	}
}

 void Game::placeBomb()
{
	if (player.status != alive) {
		return;
	}

	if (player.upgrades[bombsAvalible]
		&& map.bitmap[player.coords.x][player.coords.y].type != bombTile
		&& map.bitmap[player.coords.x][player.coords.y].type != fireTile
		&& map.bitmap[player.coords.x][player.coords.y].type != enemyTile
		&& map.bitmap[player.coords.x][player.coords.y].type != pillarTile)
	{
		map.bitmap[player.coords.x][player.coords.y].type = bombTile;
		player.bombList[player.bombsID.newestBomb].range = player.upgrades[fireRange];
		player.bombList[player.bombsID.newestBomb].explosionTimer = glfwGetTime();
		player.bombList[player.bombsID.newestBomb].coords.x = player.coords.x;
		player.bombList[player.bombsID.newestBomb].coords.y = player.coords.y;
		player.bombList[player.bombsID.newestBomb].status = placed;
		player.bombList[player.bombsID.newestBomb].kickDirection = noDir;

		player.upgrades[bombsAvalible]--;
		player.bombsID.newestBomb++;
		if (player.bombsID.newestBomb >= MAX_BOMBS) {
			player.bombsID.newestBomb -= MAX_BOMBS;
		}
	}
}

 void Game::placeBox()
{
	if (map.bitmap[player.coords.x][player.coords.y].type != bombTile && map.bitmap[player.coords.x][player.coords.y].type != fireTile) {
		map.bitmap[player.coords.x][player.coords.y].type = boxTile;
	}
}

 void Game::moveInADirectionAndKickIfPossibleAndCollectAnUpgrade(Direction dir) {
	if (player.status != alive) { //dead and teleporting players dont move
		return;
	}

	int coordCheck;
	int vert;
	int horz;

	switch (dir) {
	case north: {
		vert = 1;
		horz = 0;
		coordCheck = player.coords.y;
		break;
	}
	case east: {
		vert = 0;
		horz = 1;
		coordCheck = player.coords.x;
		break;
	}
	case south: {
		vert = -1;
		horz = 0;
		coordCheck = player.coords.y;
		break;
	}
	case west: {
		vert = 0;
		horz = -1;
		coordCheck = player.coords.x;
		break;
	}
	}

	if (coordCheck + vert + horz < vars.gridSize && coordCheck + vert + horz >= 0) {

		if (map.bitmap[player.coords.x + horz][player.coords.y + vert].type == bombTile && player.upgrades[bombKick] && (coordCheck + 2 * vert + 2 * horz < vars.gridSize && coordCheck + 2 * vert + 2 * horz >= 0)) {// sprawdz tez czy kafelka jeden dalej jest wolna, jesli chcesz kopnac bombe
			if (map.bitmap[player.coords.x + 2 * horz][player.coords.y + 2 * vert].type == pathTile) {
				int currBombID = player.getBombID(player.coords.x + horz, player.coords.y + vert);
				if (currBombID == -1) { throw("nie znalazl bomby!"); } //dla bezpieczeñstwa, ale siê nie powinno wykonaæ nigdy
				player.bombList[currBombID].kickDirection = dir;
				player.bombList[currBombID].kickTimer = glfwGetTime();
				map.bitmap[player.coords.x + horz][player.coords.y + vert].type = pathTile;
			}
		}

		if (map.bitmap[player.coords.x + horz][player.coords.y + vert].type != boxTile
			&& map.bitmap[player.coords.x + horz][player.coords.y + vert].type != pillarTile
			&& map.bitmap[player.coords.x + horz][player.coords.y + vert].type != bombTile) {
			switch (map.bitmap[player.coords.x + horz][player.coords.y + vert].upgrade) {
			case fireRange: {
				player.upgrades[fireRange]++;
				break;
			}
			case bombsAvalible: {
				player.upgrades[bombsAvalible]++;
				break;
			}
			case bombKick: {
				player.upgrades[bombKick] = 1;
				break;
			}
			case shield: {
				player.upgrades[shield] = 1;
				player.brokenShieldTimer = -1;
				break;
			}
			default: break;
			}
			map.bitmap[player.coords.x + horz][player.coords.y + vert].upgrade = noUpgrade;
			player.coords.x += horz;
			player.coords.y += vert;
		}
	}
}

 void Game::reInitPlayer() //keeps upgrades
{
	player.coords.x = 1;
	player.coords.y = vars.gridSize - 2;
	time.left = vars.gameTime + PLAYER_APPEAR_TIME;
	player.status = appearing; //previous = advancing
	for (int i = 0; i < 10; i++) {
		if (player.bombList[i].status != empty) {
			player.bombList[i].status = empty;
			player.upgrades[bombsAvalible]++;
		}
	}
	player.bombsID.newestBomb = 0;
	player.bombsID.oldestBomb = 0;
}

 void Game::resetPlayer()
{
	player.coords.x = 1;
	player.coords.y = vars.gridSize - 2;
	player.status = appearing;
	score = 0;
	time.left = vars.gameTime + PLAYER_APPEAR_TIME;
	player.upgrades[fireRange] = 2;
	player.upgrades[bombKick] = 0;
	player.upgrades[shield] = 0;
	player.upgrades[bombsAvalible] = 1;
	player.brokenShieldTimer = -1;
	for (int i = 0; i < 10; i++) {
		player.bombList[i].status = empty;
	}
	player.bombsID.newestBomb = 0;
	player.bombsID.oldestBomb = 0;
}

 void Game::moveTile(Direction dir, Bomb & currBomb)
{
	int coordCheck;
	int vert;
	int horz;

	switch (dir) {
	case north: {
		vert = 1;
		horz = 0;
		coordCheck = currBomb.coords.y;
		break;
	}
	case east: {
		vert = 0;
		horz = 1;
		coordCheck = currBomb.coords.x;
		break;
	}
	case south: {
		vert = -1;
		horz = 0;
		coordCheck = currBomb.coords.y;
		break;
	}
	case west: {
		vert = 0;
		horz = -1;
		coordCheck = currBomb.coords.x;
		break;
	}
	}

	if (coordCheck + horz + vert < vars.gridSize && coordCheck + horz + vert >= 0) {
		if (map.bitmap[currBomb.coords.x + horz][currBomb.coords.y + vert].type == pathTile) {
			map.bitmap[currBomb.coords.x + horz][currBomb.coords.y + vert].type = bombTile;
			map.bitmap[currBomb.coords.x][currBomb.coords.y].type = pathTile;
			currBomb.coords.x += horz;
			currBomb.coords.y += vert;
		}
		else if (map.bitmap[currBomb.coords.x + horz][currBomb.coords.y + vert].type == fireTile) {
			map.bitmap[currBomb.coords.x][currBomb.coords.y].type = pathTile;
			currBomb.coords.x += horz;
			currBomb.coords.y += vert;
			currBomb.kickDirection = noDir;
		}
		else {
			currBomb.kickDirection = noDir;
		}
	}
	else {
		currBomb.kickDirection = noDir;
	}
}

 void Game::spreadFire(tile & currTile, int & breaker)
{
	if (currTile.type == pathTile || currTile.type == enemyTile) {
		currTile.type = fireTile;
		currTile.fireLayers++;
	}
	else if (currTile.type == boxTile) {
		currTile.type = firedBox;
		currTile.fireLayers++;
		breaker = 1;
	}
	else if (currTile.type == bombTile) {
		currTile.type = fireTile;
		currTile.fireLayers++;
	}
	else if (currTile.type == pillarTile || currTile.type == firedBox) {
		breaker = 2;
	}
	else if (currTile.type == fireTile) {
		currTile.fireLayers++;
	}
}

 void Game::explodeBombAddPoints(Bomb & bomb)
{
	bomb.status = exploded;
	bomb.explosionTimer = glfwGetTime();

	tile *currTile;
	Bomb *currBomb;
	int breaker;
	int i = 1;

	if (player.upgrades[bombsAvalible] < MAX_BOMBS) {
		player.upgrades[bombsAvalible]++;
	}

	map.bitmap[bomb.coords.x][bomb.coords.y].type = fireTile;
	map.bitmap[bomb.coords.x][bomb.coords.y].fireLayers++;
	for (i = 1; i < bomb.range; i++) {
		if (bomb.coords.y + i >= vars.gridSize) {
			breaker = 1;
			break;
		}
		breaker = 0;
		spreadFire(map.bitmap[bomb.coords.x][bomb.coords.y + i], breaker);
		if (breaker == 1) { //napotkal box
			score += 10;
			i++;
			break;
		}
		else if (breaker == 2) { //napotkal pillar
			break;
		}
	}
	bomb.fireReached[0] = i - 1;

	for (i = 1; i < bomb.range; i++) {
		if (bomb.coords.x + i >= vars.gridSize) {
			breaker = 1;
			break;
		}
		breaker = 0;
		spreadFire(map.bitmap[bomb.coords.x + i][bomb.coords.y], breaker);
		if (breaker == 1) {//napotkal box
			score += 10;
			i++;
			break;
		}
		else if (breaker == 2) {
			break;
		}
	}
	bomb.fireReached[1] = i - 1;

	for (i = 1; i < bomb.range; i++) {
		if (bomb.coords.y - i < 0) {
			breaker = 1;
			break;
		}
		breaker = 0;
		spreadFire(map.bitmap[bomb.coords.x][bomb.coords.y - i], breaker);
		if (breaker == 1) {//napotkal box
			score += 10;
			i++;
			break;
		}
		else if (breaker == 2) {
			break;
		}
	}
	bomb.fireReached[2] = i - 1;

	for (i = 1; i < bomb.range; i++) {
		if (bomb.coords.x - i < 0) {
			breaker = 1;
			break;
		}
		breaker = 0;
		spreadFire(map.bitmap[bomb.coords.x - i][bomb.coords.y], breaker);
		if (breaker == 1) {
			score += 10; //napotkal box
			i++;
			break;
		}
		else if (breaker == 2) {
			break;
		}
	}
	bomb.fireReached[3] = i - 1;


}

 void Game::takeOffFireLayer(tile & currTile)
{
	if (!--currTile.fireLayers) {
		currTile.type = pathTile;
	}
}

 void Game::cleanUp(int currentBombID)
{
	int reach;
	int i = player.bombList[currentBombID].coords.x;
	int j = player.bombList[currentBombID].coords.y;

	reach = player.bombList[currentBombID].fireReached[0];
	for (int k = 1; k <= reach; k++) {
		takeOffFireLayer(map.bitmap[i][j + k]);
	}

	reach = player.bombList[currentBombID].fireReached[1];
	for (int k = 1; k <= reach; k++) {
		takeOffFireLayer(map.bitmap[i + k][j]);
	}

	reach = player.bombList[currentBombID].fireReached[2];
	for (int k = 1; k <= reach; k++) {
		takeOffFireLayer(map.bitmap[i][j - k]);
	}

	reach = player.bombList[currentBombID].fireReached[3];
	for (int k = 1; k <= reach; k++) {
		takeOffFireLayer(map.bitmap[i - k][j]);
	}

	takeOffFireLayer(map.bitmap[i][j]);

	player.bombList[currentBombID].status = empty;
	map.bitmap[i][j].type = pathTile;
	if (player.bombsID.oldestBomb != currentBombID) {
		player.bombList[currentBombID] = player.bombList[player.bombsID.oldestBomb];
		//moveBombData(player.bombList[player.oldestBomb], player.bombList[currentBombID]);
	}
	player.bombsID.oldestBomb++;

	if (player.bombsID.oldestBomb >= MAX_BOMBS) {
		player.bombsID.oldestBomb -= MAX_BOMBS;
	}
}

 void Game::moveCheckExplodeAndCleanUpBombs()
{
	int newestID = player.bombsID.newestBomb;
	int oldestID = player.bombsID.oldestBomb;
	Bomb *currBomb = NULL;
	for (int i = oldestID; i % MAX_BOMBS != newestID; i++) {
		currBomb = &(player.bombList[i % MAX_BOMBS]);
		//move
		if (currBomb->status == placed && currBomb->kickDirection) {
			if (glfwGetTime() - currBomb->kickTimer > 0.015) {
				currBomb->kickTimer = glfwGetTime();
				moveTile(currBomb->kickDirection, *currBomb);
			}
		}
		//check
		if (player.bombList[i % MAX_BOMBS].status == placed) {
			if (glfwGetTime() - player.bombList[i % MAX_BOMBS].explosionTimer > BOMB_EXPLODE_TIME) {
				player.bombList[i % MAX_BOMBS].status = exploding;
			}
			if (map.bitmap[player.bombList[i % MAX_BOMBS].coords.x][player.bombList[i % MAX_BOMBS].coords.y].type == fireTile) {
				player.bombList[i % MAX_BOMBS].status = exploding;
			}
		}
		if (player.bombList[i % MAX_BOMBS].status == exploded) {
			if (glfwGetTime() - player.bombList[i % MAX_BOMBS].explosionTimer > FIRE_LINGERING_TIME) {
				player.bombList[i % MAX_BOMBS].status = toBeCleaned;
			}
		}
		//explode
		if (player.bombList[i % MAX_BOMBS].status == exploding) {
			explodeBombAddPoints(player.bombList[i % MAX_BOMBS]);
		}
		//clean
		if (player.bombList[i % MAX_BOMBS].status == toBeCleaned) {
			cleanUp(i % MAX_BOMBS);
		}
	}

}

 void Game::addEnemy(int ID, EnemyType type, XY coords, Direction dir)
{
	//enemy setStats(.....); -> bo tera masz public sporo zmiennych
	enemyArray[ID].coords = coords;
	enemyArray[ID].direction = dir;
	enemyArray[ID].status = calm;
	enemyArray[ID].type = type;
}

void Game::dropEnemies()
{
	int x, y;
	for (int i = 0; i < vars.howManyEnemies; i++) {
		x = rand() % vars.gridSize;
		y = rand() % vars.gridSize;
		if ((x < 1) || (y > vars.gridSize - 2)) { //miejsce dla gracza
			i--;
			continue;
		}
		if (x % 2 && y % 2) { //kolumna 
			i--;
			continue;
		}
		if (map.bitmap[x][y].type == boxTile || map.bitmap[x][y].type == enemyTile) { //juz zajete
			i--;
			continue;
		}
		map.bitmap[x][y].type = enemyTile;
		XY coords = { x,y };
		addEnemy(i, EnemyType(rand() % 3), coords, Direction(rand() % 4 + 1));
	}
}

 int Game::moveEnemy(Enemy & enemy, int charge)
{
	int vert;
	int horz;
	int coordCheck;
	switch (enemy.direction) {
	case north: {
		vert = 1;
		horz = 0;
		coordCheck = enemy.coords.y;
		break;
	}
	case east: {
		vert = 0;
		horz = 1;
		coordCheck = enemy.coords.x;
		break;
	}
	case south: {
		vert = -1;
		horz = 0;
		coordCheck = enemy.coords.y;
		break;
	}
	case west: {
		vert = 0;
		horz = -1;
		coordCheck = enemy.coords.x;
		break;
	}
	}

	if (coordCheck + vert + horz < vars.gridSize && coordCheck + vert + horz >= 0) {
		if (map.bitmap[enemy.coords.x + horz][enemy.coords.y + vert].type == pathTile
			|| (charge && map.bitmap[enemy.coords.x + horz][enemy.coords.y + vert].type == boxTile))
		{
			map.bitmap[enemy.coords.x + horz][enemy.coords.y + vert].upgrade = noUpgrade;
			map.bitmap[enemy.coords.x + horz][enemy.coords.y + vert].type = enemyTile;

			map.bitmap[enemy.coords.x][enemy.coords.y].type = pathTile;
			enemy.coords.x += horz;
			enemy.coords.y += vert;
			//bitmap[enemy.coords.x][enemy.coords.y].type = enemyTile; //repeat

			return 1;
		}
		else if (map.bitmap[enemy.coords.x + horz][enemy.coords.y + vert].type == fireTile
			|| (charge && map.bitmap[enemy.coords.x + horz][enemy.coords.y + vert].type == firedBox)) {
			map.bitmap[enemy.coords.x][enemy.coords.y].type = pathTile;
			enemy.coords.x += horz;
			enemy.coords.y += vert;
			return 1;
		}
		else if (map.bitmap[enemy.coords.x + horz][enemy.coords.y + vert].type == enemyTile) {
			return 2;
		}
	}
	return 0;

}

 void Game::moveBlind(Enemy & enemy)
{
	static int iteration = 0;
	//static time_t tt;
	//static int seedOnce = 0;
	//if (!seedOnce) {
	//	srand(time(&tt));
	//	seedOnce++;
	//}

	int moveReturn = moveEnemy(enemy, 0);
	if (moveReturn == 1) { //udalo sie ruszyc, zresetuj iteracje i wroc
		iteration = 0;
		return;
	}
	else if (moveReturn == 2) {
		enemy.turnToRandomDirection();
		iteration = 0;
		return;
	}

	if (iteration == 0) {
		enemy.turnLeft();
		//if (!enemy.direction) {  ju¿ nie potrzebne , bo jest metoda turnLeft
		//	enemy.direction = west;
		//}
	}
	else if (iteration == 1) {
		enemy.turnLeft();
		enemy.turnLeft();
	}
	else if (iteration == 2) {
		enemy.turnRight();
	}
	else {
		iteration = 0;
		return;
	}
	iteration++;
	moveBlind(enemy);
}

 void Game::moveRandom(Enemy & enemy)
{
	for (int i = RANDOM_TRIALS; i >= 0; i--) {
		enemy.direction = Direction(rand() % 4 + 1);
		if (moveEnemy(enemy, 0) == 1) {
			break;
		}
	}
}

 void Game::moveCharger(Enemy & enemy)
{
	pointTowardsPlayerIfPossible(enemy);
	if (moveEnemy(enemy, 1) == 0) {
		enemy.status = calm;
	}
}

 int Game::pointTowardsPlayerIfPossible(Enemy & enemy)
{
	if (player.brokenShieldTimer != -1 || player.status == dead) {
		return 0;
	}
	if (enemy.coords.x % 2 == 0) {
		if (enemy.coords.x == player.coords.x) {
			if (enemy.coords.y > player.coords.y) {
				enemy.direction = south;
			}
			else {
				enemy.direction = north;
			}
			return 1;
		}
	}
	if (enemy.coords.y % 2 == 0) {
		if (enemy.coords.y == player.coords.y) {
			if (enemy.coords.x > player.coords.x) {
				enemy.direction = west;
			}
			else {
				enemy.direction = east;
			}
			return 1;
		}
	}
	return 0;

}

 bool Game::manageEnemiesAndScore()
{
	bool alldead = 1;
	bool blindMove = 0; //czy mozna poruszyc przeciwnika typu blind
	bool randomMove = 0; //czy mozna poruszyc przeciwnika typu random
	bool chargerMove = 0; //czy mozna poruszyc przeciwnika typu charger
	double timeNow = glfwGetTime();

	if (timeNow - time.lastMove1 > ENEMY1_SPEED) {
		blindMove = 1;
	}
	if (timeNow - time.lastMove2 > ENEMY2_SPEED) {
		randomMove = 1;
	}
	if (timeNow - time.lastMove3 > ENEMY3_SPEED) {
		chargerMove = 1;
	}

	for (int i = 0; i < vars.howManyEnemies; i++) {
		if (enemyArray[i].status != dead && enemyArray[i].status != dying) {
			if (map.bitmap[enemyArray[i].coords.x][enemyArray[i].coords.y].type == fireTile) {
				enemyArray[i].rottingTime = ENEMY_ROT_TIME + glfwGetTime();
				enemyArray[i].status = dying;
				score += 100;
			}
			else {
				alldead = 0;
				switch (enemyArray[i].type) {
				case blind: {
					if (blindMove) {
						moveBlind(enemyArray[i]);
						time.lastMove1 = timeNow;
					}
					break;
				}
				case random: {
					if (randomMove) {
						moveRandom(enemyArray[i]);
						time.lastMove2 = timeNow;
					}
					break;
				}
				case charger: {
					if (pointTowardsPlayerIfPossible(enemyArray[i])) {
						enemyArray[i].status = rushing;
					}
					if (enemyArray[i].status == rushing) {
						if (chargerMove) {
							moveCharger(enemyArray[i]);
							time.lastMove3 = timeNow;
						}
					}
					else if (blindMove) {
						moveBlind(enemyArray[i]);
						time.lastMove1 = timeNow;
					}
					break;
				}
				}
			}

		}

		if (enemyArray[i].status == dying) {
			if (enemyArray[i].rottingTime - glfwGetTime() < 0) {
				enemyArray[i].status = dead;
			}
		}
	}
	return alldead;
}

 void Game::resetEnemyTimes()
{
	time.lastMove1 = time.lastMove2 = time.lastMove3 = 0.0;
}

 void Game::openPortal()
{
	map.bitmap[vars.gridSize / 2][vars.gridSize / 2].type = portalTile;
}

 int Game::waitForGame_over()
{
	if (time.wait == -1) {
		time.wait = glfwGetTime() + 2; //+GAME_OVER_TIME
	}
	if (time.wait - glfwGetTime() <= 0) {
		time.wait = -1;
		return 1;
	}
	return 0;
}

 int Game::waitForNextStageAndSumScore()
{
	if (time.left > 0) {
		if (time.wait == -1) {
			time.wait = glfwGetTime() + TIME_COUNT_SPEED;
		}
		else if (time.wait - glfwGetTime() <= 0) {
			score += 1;
			time.left -= 1;
			time.wait = -1;
		}
		return 0;
	}

	if (time.wait == -1) {
		time.wait = glfwGetTime() + 3;
	}
	else if (time.wait - glfwGetTime() <= 0) {
		time.wait = -1;
		return 1;
	}
	return 0;
}

 void Game::resetTimes() {
	glfwSetTime(0);
	resetEnemyTimes();
	draw.portal(0, 0, 0, 0, 1); //resetuje czas do animacji portalu
	player.lastAnimationTime = -1; // resetPlayerTime();
	time.delta = 0;
}

 void Game::drawScoreboard() {
	glColor3f(SCOREBOARD_BACKGROUND_COLOR);
	glBegin(GL_TRIANGLE_FAN);
	glVertex2d(SCORE_BOARD_L_X, SCORE_BOARD_D_Y);
	glVertex2d(SCORE_BOARD_R_X, SCORE_BOARD_D_Y);
	glVertex2d(SCORE_BOARD_R_X, SCORE_BOARD_U_Y);
	glVertex2d(SCORE_BOARD_L_X, SCORE_BOARD_U_Y);
	glEnd();
}

 void Game::writeStaticData() {
	double sizeX = (double)FONT_SIZE;
	double sizeY = (double)FONT_SIZE*1.5;

	sign* word;
	translateWord(word, "SCORE");
	int length = 5;

	double X = SCORE_BOARD_L_X / 2 + SCORE_BOARD_R_X / 2 - length * 6 * FONT_SIZE / 2;
	double Y = 0.80;
	double x = X;
	double y = Y;

	for (int i = 0; i < length; ++i) { //narysuj dane slowo
		for (int bitX = 7; bitX >= 0; bitX--) {
			for (int bitY = 0; bitY < 5; bitY++) {
				if (word[i][bitX][bitY]) {
					draw.square(FONT_COLOR, x, y, sizeX, sizeY);
				}
				x += sizeX;
			}
			y += sizeY;
			x = X;
		}
		X = x += 6 * sizeX;
		y = Y;
	}
	delete[] word;


	translateWord(word, "HIGHSCORE");
	length = 9;
	X = SCORE_BOARD_L_X / 2 + SCORE_BOARD_R_X / 2 - length * 6 * FONT_SIZE / 2;
	Y = 0.30;
	x = X;
	y = Y;
	for (int i = 0; i < length; ++i) { //narysuj dane slowo
		for (int bitX = 7; bitX >= 0; bitX--) {
			for (int bitY = 0; bitY < 5; bitY++) {
				if (word[i][bitX][bitY]) {
					draw.square(FONT_COLOR, x, y, sizeX, sizeY);
				}
				x += sizeX;
			}
			y += sizeY;
			x = X;
		}
		X = x += 6 * sizeX;
		y = Y;
	}
	delete[] word;


	translateWord(word, "TIME");
	length = 4;
	X = SCORE_BOARD_L_X / 2 + SCORE_BOARD_R_X / 2 - length * 6 * FONT_SIZE / 2;
	Y = -0.20;
	x = X;
	y = Y;
	for (int i = 0; i < length; ++i) {
		for (int bitX = 7; bitX >= 0; bitX--) {
			for (int bitY = 0; bitY < 5; bitY++) {
				if (word[i][bitX][bitY]) {
					draw.square(FONT_COLOR, x, y, sizeX, sizeY);
				}
				x += sizeX;
			}
			y += sizeY;
			x = X;
		}
		X = x += 6 * sizeX;
		y = Y;
	}
	delete[] word;
}

 void Game::writeDynamicData() {
	double sizeX = (double)FONT_SIZE;
	double sizeY = (double)FONT_SIZE*1.5;

	sign* word;

	translateWord(word, std::to_string(getScore()));
	int length = std::to_string(score).length();

	double X = SCORE_BOARD_L_X / 2 + SCORE_BOARD_R_X / 2 - length * 6 * FONT_SIZE / 2;
	double Y = 0.60;
	double x = X;
	double y = Y;
	for (int i = 0; i < length; ++i) {//narysuj dane slowo
		for (int bitX = 7; bitX >= 0; bitX--) {
			for (int bitY = 0; bitY < 5; bitY++) {
				if (word[i][bitX][bitY]) {
					draw.square(FONT_COLOR, x, y, sizeX, sizeY);
				}
				x += sizeX;
			}
			y += sizeY;
			x = X;
		}
		X = x += 6 * sizeX;
		y = Y;
	}

	delete[] word;

	translateWord(word, std::to_string(getHighScore()));
	length = std::to_string(highscore).length();

	X = SCORE_BOARD_L_X / 2 + SCORE_BOARD_R_X / 2 - length * 6 * FONT_SIZE / 2;
	Y = 0.10;
	x = X;
	y = Y;
	for (int i = 0; i < length; ++i) {
		for (int bitX = 7; bitX >= 0; bitX--) {
			for (int bitY = 0; bitY < 5; bitY++) {
				if (word[i][bitX][bitY]) {
					draw.square(FONT_COLOR, x, y, sizeX, sizeY);
				}
				x += sizeX;
			}
			y += sizeY;
			x = X;
		}
		X = x += 6 * sizeX;
		y = Y;
	}

	delete[] word;

	translateWord(word, std::to_string(time.left));
	length = std::to_string(time.left).length();

	X = SCORE_BOARD_L_X / 2 + SCORE_BOARD_R_X / 2 - length * 6 * FONT_SIZE / 2;
	Y = -0.40;
	x = X;
	y = Y;
	for (int i = 0; i < length; ++i) {
		for (int bitX = 7; bitX >= 0; bitX--) {
			for (int bitY = 0; bitY < 5; bitY++) {
				if (word[i][bitX][bitY]) {
					draw.square(FONT_COLOR, x, y, sizeX, sizeY);
				}
				x += sizeX;
			}
			y += sizeY;
			x = X;
		}
		X = x += 6 * sizeX;
		y = Y;
	}

	delete[] word;

}

 void Game::drawGrid() {

	double X = GRID_L_X; //polozenie mapy
	double Y = GRID_D_Y;

	double x = X;
	double y = Y;

	// stosunek szerokosci do wysokosci jest forsowany na 3:2, wiec nie musze:
	//double stepX = size / gridSize / width; 
	//double stepY = size / gridSize / height;

	double stepX = 1.9 / vars.gridSize * 2.0 / 3.0; //wielkosc X i Y kafelka 
	double stepY = 1.9 / vars.gridSize;

	for (int j = 0; j < vars.gridSize; j++) {
		for (int i = 0; i < vars.gridSize; i++) {
			if (map.bitmap[i][j].type == pathTile || map.bitmap[i][j].type == bombTile || map.bitmap[i][j].type == enemyTile) {
				if (map.bitmap[i][j].upgrade) {
					switch (map.bitmap[i][j].upgrade) {
					case fireRange: {
						draw.upgrade(UPG_FIRE_RANGE_COLOR, x, y, stepX, stepY);
						break;
					}
					case bombsAvalible: {
						draw.upgrade(UPG_BOMBS_AVALIBLE, x, y, stepX, stepY);
						break;
					}
					case bombKick: {
						draw.upgrade(UPG_BOMB_KICK_COLOR, x, y, stepX, stepY);
						break;
					}
					case shield: {
						draw.upgrade(UPG_SHIELD_COLOR, x, y, stepX, stepY);
						break;
					}
					}
				}
			}
			else if (map.bitmap[i][j].type == boxTile) {
				draw.square(BOX_COLOR, x, y, stepX, stepY);
			}
			else if (map.bitmap[i][j].type == fireTile) {
				map.bitmap[i][j].upgrade = noUpgrade;
				draw.square(FIRE_COLOR, x, y, stepX, stepY);
			}
			else if (map.bitmap[i][j].type == firedBox) {
				draw.square(FIRED_BOX_COLOR, x, y, stepX, stepY);
			}
			else if (map.bitmap[i][j].type == portalTile) {
				draw.portal(x, y, stepX, stepY, 0);
			}
			x += stepX;
		}
		y += stepY;
		x = X;
	}
	y = Y;
}

 void Game::drawGridBase() {

	glColor3f(BACKGROUND_COLOR); //tlo
	glBegin(GL_TRIANGLE_FAN);
	glVertex2d(-1, -1);
	glVertex2d(-1, 1);
	glVertex2d(1, 1);
	glVertex2d(1, -1);
	glEnd();


	double X = GRID_L_X; //polozenie mapy
	double Y = GRID_D_Y;

	double x = X;
	double y = Y;

	double stepX = 1.9 / vars.gridSize * 2.0 / 3.0; //wielkosc X i Y kafelka 
	double stepY = 1.9 / vars.gridSize;

	for (int i = 0; i < vars.gridSize; i++) {
		for (int j = 0; j < vars.gridSize; j++) {
			if (i % 2 && j % 2) {
				draw.square(PILLAR_COLOR, x, y, stepX, stepY);
			}
			else {
				draw.square(PATH_COLOR, x, y, stepX, stepY);
			}
			x += stepX;
		}
		y += stepY;
		x = X;
	}
	y = Y;
}

 void Game::drawPauseScreen() {
	glColor3f(PAUSE_SCREEN_COLOR);
	glBegin(GL_TRIANGLE_FAN);
	glVertex2d(-1, -1);
	glVertex2d(-1, 1);
	glVertex2d(1, 1);
	glVertex2d(1, -1);
	glEnd();
}

 void Game::writePauseMessageScore() {
	sign* word;
	sign* word2;
	int length;
	int length2 = 0;
	translateWord(word, "SCORE:");
	length = 6;
	double X = -(length * 6 * FONT_SIZE) / 2;
	double Y = 0.6;
	double x = X;
	double y = Y;
	double sizeX = (double)FONT_SIZE;
	double sizeY = (double)FONT_SIZE*1.5;



	translateWord(word2, std::to_string(getScore()));
	int scoreLenHelper = score;
	do
	{
		scoreLenHelper /= 10;
		length2++;
	} while (scoreLenHelper);

	X = -((length2 + length + 1) * 6 * FONT_SIZE / 2);
	Y = 0.0;
	x = X;
	y = Y;
	for (int i = 0; i < length; ++i) {
		for (int bitX = 7; bitX >= 0; bitX--) {
			for (int bitY = 0; bitY < 5; bitY++) {
				if (word[i][bitX][bitY]) {
					draw.square(FONT_COLOR, x, y, sizeX, sizeY);
				}
				x += sizeX;
			}
			y += sizeY;
			x = X;
		}
		X = x += 6 * sizeX;
		y = Y;
	}
	delete[] word;


	x = X += sizeX;
	for (int i = 0; i < length2; ++i) {
		for (int bitX = 7; bitX >= 0; bitX--) {
			for (int bitY = 0; bitY < 5; bitY++) {
				if (word2[i][bitX][bitY]) {
					draw.square(FONT_COLOR, x, y, sizeX, sizeY);
				}
				x += sizeX;
			}
			y += sizeY;
			x = X;
		}
		X = x += 6 * sizeX;
		y = Y;
	}
	delete[] word2;


}

 void Game::writePauseMessage(GameStatus pauseType) {
	sign* word;
	sign* word2;

	int length;
	int length2;
	switch (pauseType)
	{
	case playing: return;
	case startPause: {
		translateWord(word, "HELLO!");
		translateWord(word2, "PRESS SPACE TO START");
		length = 6;
		length2 = 20;
		break;
	}
	case stopPause: {
		translateWord(word, "GAME PAUSED");
		translateWord(word2, "PRESS SPACE TO UNPAUSE");
		length = 11;
		length2 = 22;
		break;
	}
	case gameOverPause: {
		translateWord(word, "GAME OVER!");
		translateWord(word2, "PRESS SPACE TO RESTART");
		length = 10;
		length2 = 22;
		break;
	}
	case wonPause: {
		translateWord(word, "YOU WON!");
		translateWord(word2, "PRESS SPACE TO GO ON");
		length = 8;
		length2 = 20;
		break;
	}
	default:
		return;
	}

	double X = -(length * 6 * FONT_SIZE) / 2;
	double Y = 0.6;
	double x = X;
	double y = Y;
	double sizeX = (double)FONT_SIZE;
	double sizeY = (double)FONT_SIZE*1.5;

	for (int i = 0; i < length; ++i) { //narysuj dany ciag znakow
		for (int bitX = 7; bitX >= 0; bitX--) {
			for (int bitY = 0; bitY < 5; bitY++) {
				if (word[i][bitX][bitY]) {
					draw.square(FONT_COLOR, x, y, sizeX, sizeY);
				}
				x += sizeX;
			}
			y += sizeY;
			x = X;
		}
		X = x += 6 * sizeX;
		y = Y;
	}
	delete[] word;


	X = -(length2 * 6 * FONT_SIZE / 2);
	Y = 0.3;
	x = X;
	y = Y;
	for (int i = 0; i < length2; ++i) {
		for (int bitX = 7; bitX >= 0; bitX--) {
			for (int bitY = 0; bitY < 5; bitY++) {
				if (word2[i][bitX][bitY]) {
					draw.square(FONT_COLOR, x, y, sizeX, sizeY);
				}
				x += sizeX;
			}
			y += sizeY;
			x = X;
		}
		X = x += 6 * sizeX;
		y = Y;
	}
	delete[] word2;

}

 void Game::drawPlayer() {
	double color[3] = { PLAYER_COLOR };

	double sizeX = 1.9 / vars.gridSize * 2.0 / 3.0; //wielkosc X i Y kafelka 
	double sizeY = 1.9 / vars.gridSize;

	double x = GRID_L_X + player.coords.x*sizeX;
	double y = GRID_D_Y + player.coords.y*sizeY;

	double timeNow = glfwGetTime();
	if (player.status == appearing) { //pojawia sie liniowo
		double resizer = (PLAYER_SIZE - 0.5) * (timeNow) / PLAYER_APPEAR_TIME;
		glColor3f(color[0] * (timeNow / PLAYER_APPEAR_TIME), color[1] * (timeNow / PLAYER_APPEAR_TIME), color[2] * (timeNow / PLAYER_APPEAR_TIME));
		glBegin(GL_TRIANGLE_FAN);
		glVertex2d(x + sizeX * (0.5 - resizer), y + sizeY * (0.5 - resizer));
		glVertex2d(x + sizeX * (0.5 + resizer), y + sizeY * (0.5 - resizer));
		glVertex2d(x + sizeX * (0.5 + resizer), y + sizeY * (0.5 + resizer));
		glVertex2d(x + sizeX * (0.5 - resizer), y + sizeY * (0.5 + resizer));
		glEnd();
		return;
	}

	//gracz juz jest na mapie - nie jest w trakcie pojawiania sie - model normalny

	double shieldFlash;
	if (player.upgrades[shield]) {
		draw.square(SHIELD_COLOR, x, y, sizeX, sizeY);
	}
	else if ((shieldFlash = glfwGetTime() - player.brokenShieldTimer) < BROKEN_SHIELD_TIME) {
		int i;
		for (i = 0; shieldFlash > 0; i++) {
			shieldFlash -= i * 0.01;
		}
		if (i % 2) {
			draw.square(SHIELD_COLOR, x, y, sizeX, sizeY);
		}
	}
	else {
		player.brokenShieldTimer = -1;
	}
	if (player.status != dead) {
		glColor3f(PLAYER_COLOR);
	}
	else {
		glColor3f(DEAD_PLAYER_COLOR);
	}

	glBegin(GL_TRIANGLE_FAN);
	glVertex2d(x + (1 - PLAYER_SIZE)*sizeX, y + (1 - PLAYER_SIZE)*sizeY);
	glVertex2d(x + PLAYER_SIZE * sizeX, y + (1 - PLAYER_SIZE)*sizeY);
	glVertex2d(x + PLAYER_SIZE * sizeX, y + PLAYER_SIZE * sizeY);
	glVertex2d(x + (1 - PLAYER_SIZE)*sizeX, y + PLAYER_SIZE * sizeY);
	glEnd();

	//switch (player.face) { //niezaimplementowane (rysowanie twarzy gracza
	//case happy: {
	//	break;
	//}
	//}
}

 void Game::drawAllEnemies() {
	double X = GRID_L_X; //polozenie mapy
	double Y = GRID_D_Y;

	double x = X;
	double y = Y;

	double sizeX = 1.9 / vars.gridSize * 2.0 / 3.0; //wielkosc X i Y kafelka 
	double sizeY = 1.9 / vars.gridSize;

	for (int i = 0; i < vars.howManyEnemies; i++) {
		if (enemyArray[i].status != dead) {
			draw.enemy(x + enemyArray[i].coords.x*sizeX, y + enemyArray[i].coords.y*sizeY, sizeX, sizeY, enemyArray[i]);
		}
	}
}

 void Game::drawBombs() {
	double X = GRID_L_X; //polozenie mapy
	double Y = GRID_D_Y;

	double x = X;
	double y = Y;

	double sizeX = 1.9 / vars.gridSize * 2.0 / 3.0; //wielkosc X i Y kafelka 
	double sizeY = 1.9 / vars.gridSize;

	int newestID = player.bombsID.newestBomb;
	int oldestID = player.bombsID.oldestBomb;
	for (int i = oldestID; i % MAX_BOMBS != newestID; i++) {
		if (player.bombList[i % MAX_BOMBS].status == placed) {
			draw.bomb(x + player.bombList[i % MAX_BOMBS].coords.x*sizeX, y + player.bombList[i % MAX_BOMBS].coords.y*sizeY, sizeX, sizeY, player.bombList[i % MAX_BOMBS]);
		}
	}
}

 Game::Game(int howManyEnemies, int howManyBoxes, int howManyUpgrades, int gridSize, int gameTime, int debugMode, int highscore):
	 vars({ howManyEnemies, howManyBoxes, howManyUpgrades, gridSize, gameTime, debugMode }), highscore(highscore), map(gridSize), player(gridSize) {
	 setDefaultsIfNecessary();
	 generateMap();
	 dropEnemies();
	 gameStatus = startPause;
	 score = 0;
	 time.wait = -1;
	 time.lastMove1 = -1;
	 time.lastMove2 = -1;
	 time.lastMove3 = -1;

	 portalOpened = false;
	 windowSize = { WINDOW_WIDTH,WINDOW_HEIGHT };

	 time.left = vars.gameTime + PLAYER_APPEAR_TIME;
 }

 Game::~Game()
{
	//dealocateMap(&bitmap, gridSize);
	unSetGlList();
	glfwDestroyWindow(window);
	glfwTerminate();
}

int Game::getHighScore()
{
	if (highscore > 9999) {
		highscore = 9999;
	}
	return highscore;
}

 void Game::initGLFW()
{
	//inicjalizacja glfw i ustawienie odpowiednich funkcji / wartosci dla glfw
	if (!glfwInit())
	{
		throw("glfw sie nie zainicjalizowalo :/");
		// Initialization failed
	}

	window = glfwCreateWindow(640, 480, "Boomber", NULL, NULL);
	if (!window) {
		glfwTerminate();
		throw("GLFWwindow failed");
	}

	glfwSetErrorCallback(error_callback);
	glfwMakeContextCurrent(window);
	glfwSetKeyCallback(window, key_callback);
	glfwSetWindowAspectRatio(window, 3, 2);

	setGlLists();

	glfwSetWindowUserPointer(window, this);
}

void Game::gameLoop()
{
	glfwSwapInterval(1);
	while (!glfwWindowShouldClose(window))
	{
		forceThreeToTwoRatio();	//forsowanie stosunku 3:2

		glViewport(0, 0, windowSize.width, windowSize.height);
		glClear(GL_COLOR_BUFFER_BIT);

		//rysowanie pauzy
		if (gameStatus != playing) {
			glCallList(listArray[gameStatus]);	//rysowanie tla i odpowiedniej wiadomosci

			if (gameStatus != startPause) {
				writePauseMessageScore();	//dopisuje punkty do wiadomosci pauzy
			}
			glfwSwapBuffers(window);
			glfwPollEvents();		//aby wyjsc z pauzy nalezy wcisnac spacje
			continue;		//powrot do poczatku petli
		}

		glCallList(listArray[5]);	//szybsze jest narysowanie najpierw calej mapy jako same filary i sciezki za pomoca glCallList
		drawGrid(); //a potem nadpisac niektore sciezki pudelkami

		glCallList(listArray[0]);	//rysuje pole na dane i ich tytuly
		writeDynamicData(); //uzupelnia to pole potrzebnymi liczbami

		moveCheckExplodeAndCleanUpBombs(); //obsluguje bomby

		if (manageEnemiesAndScore()) { //obsluz przeciwnikow
			if (!portalOpened) {	 //jesli wszyscy sa martwi, to sprobuj otworzyc portal
				openPortal();
			}
		}

		drawAllEnemies(); //narysuj przeciwnikow

		checkPlayerStatus(); //zaktualizuj dane gracza, moze przegral?
		drawPlayer();	//narysuj gracza na mapie

		drawBombs(); //rysuje bomby jako ostatnia rzecz, zeby byly na wierzchu - dla widocznosci

		if (score > highscore) { //zaktualizuj highscore
			highscore = score;
		}

		if (player.status == dead) {	//gracz przegral
			if (waitForGame_over()) { //sprawdz czy minelo dosc duzo czasu
				resetTimes();
				resetPlayer();
				generateMap();
				dropEnemies();
				gameStatus = gameOverPause;
			}
		}
		else if (player.status == winning) {	//gracz wygral
			if (waitForNextStageAndSumScore()) { //czy minelo dosc duzo czasu
				resetTimes();
				reInitPlayer();
				generateMap();
				dropEnemies();
				portalOpened = 0;
				gameStatus = wonPause;
			}
		}

		glfwSwapBuffers(window);
		glfwPollEvents();
	}
}

 void Game::DrawMethods::square(float R, float G, float B, double x, double y, double sizeX, double sizeY) {
	glColor3f(R, G, B);
	glBegin(GL_TRIANGLE_FAN);
	glVertex2d(x, y);
	glVertex2d(x + sizeX, y);
	glVertex2d(x + sizeX, y + sizeY);
	glVertex2d(x, y + sizeY);
	glEnd();
}

 void Game::DrawMethods::upgrade(float R, float G, float B, double x, double y, double sizeX, double sizeY) {
	glColor3f(R, G, B);
	glBegin(GL_TRIANGLE_FAN);
	glVertex2d(x + sizeX / 2, y + sizeY * (1 - UPGRADE_CRYSTAL_SIZE));
	glVertex2d(x + sizeX * (1 - UPGRADE_CRYSTAL_SIZE), y + sizeY / 2);
	glVertex2d(x + sizeX / 2, y + sizeY * UPGRADE_CRYSTAL_SIZE);
	glVertex2d(x + sizeX * UPGRADE_CRYSTAL_SIZE, y + sizeY / 2);
	glEnd();
}

 void Game::DrawMethods::bomb(double x, double y, double sizeX, double sizeY, Bomb & bomb) {
	double sizer;
	float heatColor;
	double timeDiff = glfwGetTime() - bomb.explosionTimer;

	heatColor = 0.5 + 0.45 * timeDiff / BOMB_EXPLODE_TIME; //bomba rosnie liniowo
	sizer = 0.20 * timeDiff / BOMB_EXPLODE_TIME;

	glColor3f(heatColor, 0.1, 0.1);
	glBegin(GL_TRIANGLE_FAN);
	glVertex2d(x + sizeX * (0.25 - sizer), y + sizeY * (0.25 - sizer));
	glVertex2d(x + sizeX * (0.75 + sizer), y + sizeY * (0.25 - sizer));
	glVertex2d(x + sizeX * (0.75 + sizer), y + sizeY * (0.75 + sizer));
	glVertex2d(x + sizeX * (0.25 - sizer), y + sizeY * (0.75 + sizer));
	glEnd();
}

 void Game::DrawMethods::enemyBlind(float R, float G, float B, double x, double y, double sizeX, double sizeY) {
	glColor3f(R, G, B);
	glBegin(GL_TRIANGLE_FAN);
	glVertex2d(x + 0.09*sizeX, y + 0.09*sizeY);
	glVertex2d(x + 0.91*sizeX, y + 0.09*sizeY);
	glVertex2d(x + 0.91*sizeX, y + 0.91*sizeY);
	glVertex2d(x + 0.09*sizeX, y + 0.91*sizeY);
	glEnd();
}

 void Game::DrawMethods::enemyRandom(float R, float G, float B, double x, double y, double sizeX, double sizeY) {
	glColor3f(R, G, B);
	glBegin(GL_TRIANGLE_FAN);
	glVertex2d(x + 0.09*sizeX, y + 0.09*sizeY);
	glVertex2d(x + 0.91*sizeX, y + 0.09*sizeY);
	glVertex2d(x + 0.91*sizeX, y + 0.91*sizeY);
	glVertex2d(x + 0.09*sizeX, y + 0.91*sizeY);
	glEnd();
}

 void Game::DrawMethods::enemyChargerCalm(float R, float G, float B, double x, double y, double sizeX, double sizeY) {
	glColor3f(R, G, B);
	glBegin(GL_TRIANGLE_FAN);
	glVertex2d(x + 0.09*sizeX, y + 0.09*sizeY);
	glVertex2d(x + 0.91*sizeX, y + 0.09*sizeY);
	glVertex2d(x + 0.91*sizeX, y + 0.91*sizeY);
	glVertex2d(x + 0.09*sizeX, y + 0.91*sizeY);
	glEnd();
}

 void Game::DrawMethods::enemyChargerUpset(float R, float G, float B, double x, double y, double sizeX, double sizeY) {
	glColor3f(R, G, B);
	glBegin(GL_TRIANGLE_FAN);
	glVertex2d(x + 0.09*sizeX, y + 0.09*sizeY);
	glVertex2d(x + 0.91*sizeX, y + 0.09*sizeY);
	glVertex2d(x + 0.91*sizeX, y + 0.91*sizeY);
	glVertex2d(x + 0.09*sizeX, y + 0.91*sizeY);
	glEnd();
}

 void Game::DrawMethods::enemy(double x, double y, double sizeX, double sizeY, Enemy & enemy) {
	switch (enemy.type) {
	case blind: {
		if (enemy.status == dying) {
			enemyBlind(ENEMY1_DEAD_COLOR, x, y, sizeX, sizeY);
		}
		else {
			enemyBlind(ENEMY1_COLOR, x, y, sizeX, sizeY);
		}
		break;
	}
	case random: {
		if (enemy.status == dying) {
			enemyRandom(ENEMY2_DEAD_COLOR, x, y, sizeX, sizeY);
		}
		else {
			enemyRandom(ENEMY2_COLOR, x, y, sizeX, sizeY);
		}
		break;
	}
	case charger: {
		if (enemy.status == rushing) {
			if (enemy.status == dying) {
				enemyChargerUpset(ENEMY3_DEAD_COLOR, x, y, sizeX, sizeY);
			}
			else {
				enemyChargerUpset(ENEMY3_2ND_PHASE_COLOR, x, y, sizeX, sizeY);
			}
			break;
		}
		else {
			if (enemy.status == dying) {
				enemyChargerCalm(ENEMY3_DEAD_COLOR, x, y, sizeX, sizeY);
			}
			else {
				enemyChargerCalm(ENEMY3_1ST_PHASE_COLOR, x, y, sizeX, sizeY);
			}
			break;
		}
		break;
	}
	}
}

 void Game::DrawMethods::portal(double x, double y, double sizeX, double sizeY, int reset) {
	static double lastTime = 0;
	double timeNow = glfwGetTime();
	double timeDiff = timeNow - lastTime;
	if (reset) {
		lastTime = 0;
		return;
	}
	if (timeDiff > PORTAL_SUCKING_SPEED) {
		lastTime = timeNow;
		timeDiff = 0;
	}

	glColor3f(PORTAL_COLOR);
	glBegin(GL_TRIANGLE_FAN);
	glVertex2d(x, y);
	glVertex2d(x + sizeX, y);
	glVertex2d(x + sizeX, y + sizeY);
	glVertex2d(x, y + sizeY);
	glEnd();

	double resizer = 0.5 * (timeDiff) / PORTAL_SUCKING_SPEED;
	glColor3f(PORTAL_COLOR_2);
	glBegin(GL_TRIANGLE_FAN);
	glVertex2d(x + sizeX * (resizer / 3), y + sizeY * (resizer / 3));
	glVertex2d(x + sizeX * (1 - resizer / 3), y + sizeY * (resizer / 3));
	glVertex2d(x + sizeX * (1 - resizer / 3), y + sizeY * (1 - resizer / 3));
	glVertex2d(x + sizeX * (resizer / 3), y + sizeY * (1 - resizer / 3));
	glEnd();
	glColor3f(PORTAL_COLOR_3);
	glBegin(GL_TRIANGLE_FAN);
	glVertex2d(x + sizeX * (resizer), y + sizeY * (resizer));
	glVertex2d(x + sizeX * (1 - resizer), y + sizeY * (resizer));
	glVertex2d(x + sizeX * (1 - resizer), y + sizeY * (1 - resizer));
	glVertex2d(x + sizeX * (resizer), y + sizeY * (1 - resizer));
	glEnd();
}
