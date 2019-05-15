// GuessMyNumber.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>

#include "GuessGame.h"


// рефакторинг игры

// ввести свои синонимы

usin print=std::cout;
void PrintIntro();
void PlayGame();
FString GetValidGuess();
GuessGame GuessNumberGame;

int main()
{
    bool bPlayAgain = false;
    do
    {
       PrintIntro();
    }
    while(bPlayAgain);
    return 0;








	enum sideRandom {COMPUTER, HUMAN};
	sideRandom side = COMPUTER;
	cout << "Who will make number ?\n 0 - computer\n 1 -human\n>";
	int choice;
	cin >> choice;
	switch (choice)
	{ 
	case COMPUTER:
		side = COMPUTER;
		break;
	case HUMAN:
		side = HUMAN;
		break;
	default:
		break;
	}
	int secretNumber;
	int tries = 0;
	int guess;
	if (choice == COMPUTER) {
		srand(static_cast<unsigned int>(time(0)));
		secretNumber = rand() % 100 + 1;
		tries = 0;
		guess;

		do
		{
			cout << "Enter a guess:";
			cin >> guess;
			tries++;

			if (guess > secretNumber)
			{
				cout << "Too high!\n\n";
			}
			else if (guess < secretNumber)
			{
				cout << "Too low!\n\n";
			}
			else
			{
				cout << "\nThat's it ! You got it in " << tries << " guesses!\n";
			}
		} while (guess != secretNumber);
	}
	else
	{
		cout << "\n\nPlease enter number:";
		cin >> secretNumber;
		
		int range = 100;
		do
		{
			srand(static_cast<unsigned int>(time(0)));
			guess = rand() % range + 1;
			tries++;
			cout << "A guess is " << guess << endl;
			if (guess > secretNumber)
			{
				cout << "Too high!\n\n";
			}
			else if (guess < secretNumber)
			{
				cout << "Too low!\n\n";
			}
			else
			{
				cout << "\nThat's it ! You got it in " << tries << " guesses!\n";
			}
		} while (guess != secretNumber);



	}
	

	return 0;
}

void PlayGame()
{
    GuessNumberGame.ResetGame();
    while(!GuessNumberGame.isGameWin() && GuessNumberGame.GetCurrentAttempt() <= GuessNumberGame.GetMaxTries())
    {
        FString GuessNumber = GetValidGuess();

    }
}


void PrintIntro()
{
   print << "Welcome to Guess My Number\n\n";
   print <<"Правила игры: \n";
   print << "Игрок и компьютер по очереди угадывают число\n";
   return;
}

int getNumber()
{
	return 0;
};
