// GuessMyNumber.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#define print std::cout 

#include "GuessGame.h"



// Что можно сделать 
// Добавить ИИ , что бы ответы от компьютера формировались в зависимости от корректного чтения с вывода


void PrintIntro();
void PlayGame();
FString GetValidGuess();
bool AskToPlayAgain();
void PrintGameSummary();
GuessGame GameEntity;

int main()
{
	setlocale(LC_ALL, "Russian");
    bool bPlayAgain = false;
    do
    {
       PrintIntro();
	   PlayGame();
	   bPlayAgain = AskToPlayAgain();
    }
    while(bPlayAgain);
    return 0;
}

void PlayGame()
{
    GameEntity.ResetGame();
	GameEntity.SetRandomNumber();
    while(!GameEntity.IsGameWin() && GameEntity.GetCurrentAttempt() <= GameEntity.GetMaxTries())
    {
		FString GuessNumber = GetValidGuess();
		GameEntity.SubmitValidGuess(GuessNumber);
    }
	PrintGameSummary();
}

FString GetValidGuess()
{
	EGuessStatus Status = EGuessStatus::Invalid_Type;
	FString Guess;
	do
	{
		int32 CurrentTry = GameEntity.GetCurrentAttempt();
		std::cout << "Try " << CurrentTry << " of " << GameEntity.GetMaxTries();
		std::cout << ". Enter your guess : ";

		if (GameEntity.GetSide() == Side::Human)
		{
			getline(std::cin, Guess);
		}
		else
		{
			srand(static_cast<unsigned int>(time(0)));
			int32 RandomGuess = rand() % 100 + 1;
			Guess = std::to_string(RandomGuess);
		}

		Status = GameEntity.CheckValidGuess(Guess);
		switch (Status)
		{
		case EGuessStatus::Invalid_Type:
			std::cout << "Please enter a integer number.\n\n";
			break;
		default:
			break;
		}
	}
	while (Status != EGuessStatus::Ok);
	return Guess;
}

void PrintIntro()
{
	print << "Добро пожаловать в игру - УГАДАЙ ЧИСЛО\n\n";
	print <<"Правила игры: \n";
	print << "Игрок и компьютер по очереди угадывают число\n";
   return;
}

bool AskToPlayAgain()
{
	std::cout << "Do you want to play again (y/n) ? ";
	FString Response = "";
	getline(std::cin, Response);
	return (Response[0] == 'y') || (Response[0] == 'Y');
}

void PrintGameSummary()
{
	if (GameEntity.IsGameWin())
	{
		std::cout << "WELL DONE... YOU WIN!\n";
	}
	else
	{
		std::cout << "Better luck next time!\n";
	}
	return;
}