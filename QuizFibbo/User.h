//
// Created by dort on 24.09.18.
//

#ifndef QUIZFIBBO_USER_H
#define QUIZFIBBO_USER_H

#endif //QUIZFIBBO_USER_H
#include <string>


class User
{
private:
    std::string name;
public:
    int GetNumber(int num1, int num2, bool repeate = false);
    std::string GetName() const;
};