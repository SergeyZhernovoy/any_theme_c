//
// Created by dort on 24.09.18.
//

#include "Game.h"

void Game::GameLoop()
{
    int first = 2, second = 3;
    bool repeate = true, tryFirst = true;


    while(repeate)
    {
        int answer = user.GetNumber(first, second, tryFirst);
        usersNumber.push_back(answer);
        repeate = false;
        tryFirst = false;
    }
}
