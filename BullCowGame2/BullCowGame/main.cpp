#include <iostream>
#include <string>
#include "pch.h"
#include "FBullCowGame.h"
void PrintIntro();
std::string GetGuess();
void PlayGame();
bool AskToPlayAgain();

int main()
{
	
	bool bPlayAgain = false;
	do 
	{
	   PrintIntro();
	   PlayGame();
	   bPlayAgain = AskToPlayAgain();
	}
	while (bPlayAgain);
	return 0;
}

void PrintIntro()
{
	constexpr int WORLD_LENGTH = 5;
	std::cout << "Welcome to Bulls and Cows, a fun word game\n";
	std::cout << "Can you guess the " << WORLD_LENGTH;
	std::cout << " letter isogram I'm thinking of?\n";
	return;
}

std::string GetGuess()
{
	std::string Guess;
	std::cout << "Enter your guess : ";
	getline(std::cin, Guess);
	return Guess;
}

void PlayGame()
{
	constexpr int NUMBER_OF_TURNS = 5;
	for (int count = 0; count < NUMBER_OF_TURNS; count++)
	{
		std::string Guess = GetGuess();
		std::cout << "Your guess was: " << Guess << std::endl;
		std::cout << std::endl;
	}
}

bool AskToPlayAgain()
{
	std::cout << "Do you want to play again (y/n) ? ";
	std::string Response = "";
	getline(std::cin, Response);
	return (Response[0] == 'y') || (Response[0] == 'Y');
}
