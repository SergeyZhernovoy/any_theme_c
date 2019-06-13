#pragma once
#include "board.h"
#include <string>

class Game
{
public:
	GameBoard* doInput(std::string player, GameBoard* gb);
	bool inRange(int test);
};
