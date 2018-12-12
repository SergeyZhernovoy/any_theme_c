//
// Created by dort on 24.09.18.
//

#ifndef QUIZFIBBO_GAME_H
#define QUIZFIBBO_GAME_H

#endif //QUIZFIBBO_GAME_H
#include <vector>
#include "User.h"

class Game
{
private:
    User user;
    int countRight;
    int countAnswer;
    const int MAX_TRIES = 3;
    std::vector<int>  usersNumber;
public:
    void GameLoop();
    Game() {
        user.SetName("Player");
    };

};
