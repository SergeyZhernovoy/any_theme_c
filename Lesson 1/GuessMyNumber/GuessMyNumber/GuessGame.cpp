#include "GuessGame.h"


uint32 GuessGame::GetCurrentAttempt() const
{
    return CurrentAttempt;
}

GuessGame::GuessGame()
{
   ResetGame();
}

void GuessGame::StartGame()
{


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

EGuessStatus GuessGame::CheckValidGuess(FString Guess)
{

}

void GuessGame::ResetGame()
{
    first = Side::Computer;
    CurrentAttempt = 1;
    srand(static_cast<unsigned int>(time(0)));
    RandomNumber = rand() % 100 + 1;
}

int32 GuessGame::GetMaxTries() const
{
    constexpr int MAX_TRIES = 20;
    return MAX_TRIES;
}
