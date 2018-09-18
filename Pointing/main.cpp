//
// Created by dort on 18.09.18.
//
#include <iostream>
#include <string>
using namespace std;
void badSwap(int num1, int num2);
void goodSwap(int* const num1, int* const num2);
int main()
{
    int* pScore = NULL;
    int score = 1000;
    pScore = &score;
    cout << "Assignin &score to pScore\n";
    cout << "&score is: " << &score << "\n";
    cout << "pScore is: " << pScore << "\n";
    cout << "score is: " <<  score << "\n";
    cout << "*pScore is: " << *pScore << "\n";


    cout << "Adding 500 to score\n";
    score += 500;
    cout << "score is: " <<  score << "\n";
    cout << "*pScore is: " << *pScore << "\n";

    cout << "Adding 500 to *pScore\n";
    *pScore += 500;
    cout << "score is: " <<  score << "\n";
    cout << "*pScore is: " << *pScore << "\n";

    cout << "Assignin &newScore to pScore\n";
    int newScore = 5000;
    pScore = &newScore;
    cout << "&newScore is: " << &newScore << "\n";
    cout << "pScore is: " << pScore << "\n";
    cout << "newScore is: " <<  newScore << "\n";
    cout << "*pScore is: " << *pScore << "\n";


    cout << "Assignin &str to pStr\n";
    string str = "score";
    string* pStr = &str;
    cout << "str is: " << str << "\n";
    cout << "*pStr is: " << &score << "\n";
    cout << "(*pStr).size() is " << (*pStr).size() << "\n";
    cout << "pStr -> size() is " << pStr -> size() << "\n";


    /*swap example*/
    int myNum = 100;
    int yourNum = 150;
    cout << "\nmy num = " << myNum << " your num = " << yourNum << endl;
    badSwap(myNum, yourNum);
    cout << "\nmy num = " << myNum << " your num = " << yourNum << endl;
    goodSwap(&myNum, &yourNum);
    cout << "\nmy num = " << myNum << " your num = " << yourNum << endl;

    return 0;
}

void badSwap(int x, int y)
{
    cout << "\n Calling bad swap func\n";
    int temp = x;
    x = y;
    y = temp;
}

void goodSwap(int* const x, int* const y)
{
    cout << "\n Calling good swap func\n";
    int temp = *y;
    *y = *x;
    *x = temp;
}