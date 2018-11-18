//
// Created by dort on 24.09.18.
//

#include "User.h"

int User::GetNumber(int num1, int num2, bool repeate)
{
    int answer;
    if (repeate)
    {
        std::cout << "\n Number a = " << num1 << " and b = " << num2 << endl;
        std::cout << " are elemnts by continues line.\n";
    }

    std::cout << "How will be next number ? :>";
    std::cin >> answer;
    return answer;

}