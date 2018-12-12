//
// Created by dort on 24.09.18.
//

#include "User.h"
#include <iostream>

int User::GetNumber(int num1, int num2, bool repeate)
{
    int answer;
    if (repeate)
    {
        cout << "\n Number a = " << num1 << " and b = " << num2 << endl;
        cout << " are elements by continues line.\n";
    }

    cout << "How will be next number ? :>";
    cin >> answer;
    return answer;

}

const string User::GetName() const
{
    return name;
}

void User::SetName(string name)
{
    this->name = name;
}
