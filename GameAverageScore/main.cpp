#include <iostream>
#include <cstdlib>
#include <ctime>
using std::cout;
using std::endl;
using std::string;
using std::cin;

int main() {
    /**
     * задание по главе 1, рассчитать среднее по очкам игроков
     */

    /*string user1, user2, user3;
    typedef unsigned short int ushort;
    ushort score1, score2, score3;
    const int AMOUNT_PLAEYRS = 3;
    cout << " Please enter name player" << std::endl;
    cout << "\nFirst player: >";
    cin >> user1;
    cout << "\nSecond player: >";
    cin >> user2;
    cout << "\nThird player: >";
    cin >> user3;
    cout << "\nPlease enter score of player" << std::endl;
    cout << "\nFirst player: >";
    cin >> score1;
    cout << "\nSecond player: >";
    cin >> score2;
    cout << "\nThird player: >";
    cin >> score3;
    cout << "Average score:" << (score1 + score2 + score3) / AMOUNT_PLAEYRS; */

    /**
     * задание по главе 2, показать работу со switch
     */
     /*
    int myLevel = 1;
    enum level {EASY =1 , NORMAL, HARD};
    cout << "Difficulty levels\n\n";
    cout << "1- Easy\n";
    cout << "2- Normal\n";
    cout << "3- Diffuclt\n";
    cout << "\nPlease enter level:> ";
    cin >> myLevel;
    switch (myLevel)
    {
        case EASY:
            cout << "You picked EASY.\n";
            break;
        case NORMAL:
            cout << "You picked NORMAL.\n";
            break;
        case HARD:
            cout << "You picked HARD.\n";
            break;
        default:
            cout << "You made an illegal choice\n";
    }
    */
    /**
     * пример работы цикла и генератора
    */
    srand(static_cast<unsigned int>(time(0)));
    char exit = 'y';
    int randomNumber = rand();
    int die = 0;
    while(exit == 'y')
    {
        die = (randomNumber % 6) + 1;
        cout << "You rolled a "<< die << endl;
        cout << "Continue game ? (y/n):";
        cin >>  exit;
        if (exit == 'y')
        {
            randomNumber = rand();
        }
    }
    return 0;
}