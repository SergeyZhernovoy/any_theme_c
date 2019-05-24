#include "GuessGame.h"
#include <cstdlib>
using int32 = int;

int32 GuessGame::GetCurrentAttempt() const
{
    return CurrentAttempt;
}

bool GuessGame::IsGameWin() const
{
	return bIsGameWin;
}

GuessGame::GuessGame()
{
   ResetGame();
}

Side GuessGame::GetSide() const
{
	return first;
}

void GuessGame::SetRandomNumber()
{
	if (first == Side::Computer)
	{
		std::cout << "Загадывает компьютер\n";
		srand(static_cast<unsigned int>(time(0)));
		RandomNumber = rand() % 100 + 1;
	}
	else
	{
		std::cout << "Загадывает человек\n";
		int32 Guess;
		do
		{
			std::cout << "Введите случайное число от 1 до 100: ";
			std::cin >> Guess;
			std::cout << std::endl;
		}
		while (Guess > 100);
		RandomNumber = Guess;
	}
}

void GuessGame::SetSide()
{
    if (first == Side::Computer)
    {
        first = Side::Human;
    }
    else
    {
        first = Side::Computer;
    }
}

CheckNumber GuessGame::IsNumber(FString Guess) const
{
	CheckNumber Check;
	Check.Number = stoi(Guess);
	Check.IsNumber = true;
	return Check;
}

EGuessStatus GuessGame::CheckValidGuess(FString Guess)
{
	if (!IsNumber(Guess).IsNumber)
	{
		return EGuessStatus::Invalid_Type;
	}
	return EGuessStatus::Ok;
}

void GuessGame::SubmitValidGuess(FString Guess)
{
	int32 GuessNumber = IsNumber(Guess).Number;
	CurrentAttempt++;

	if (GuessNumber > RandomNumber)
	{
		std::cout << "Слишком много!\n\n";
	}
	 
	if (GuessNumber < RandomNumber)
	{
		std::cout << "Слишком мало!\n\n";
	} 
		 
	if (GuessNumber == RandomNumber)
	{
		std::cout << "\nЭто верно ! Вы угадали с  " << GetCurrentAttempt() << " попыток !\n";
		bIsGameWin = true;
	}
}

void GuessGame::ResetGame()
{
    SetSide();
    CurrentAttempt = 1;
	bIsGameWin = false;
}

int32 GuessGame::GetMaxTries() const
{
    constexpr int MAX_TRIES = 20;
    return MAX_TRIES;
}
