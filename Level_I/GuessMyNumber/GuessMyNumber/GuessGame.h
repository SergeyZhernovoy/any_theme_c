#include <cstdlib>
#include <ctime>
#include <string>
#include <iostream>

#ifndef GUESSGAME_H
#define GUESSGAME_H
#endif // GUESSGAME_H

using FString=std::string;
using int32= int;
constexpr int RANGE = 100;


enum class Side
{
    Computer,
    Human
};

enum class EGuessStatus
{
    Invalid_Type,
    Ok
};

struct CheckNumber
{
	int32 Number;
	bool  IsNumber;
};


class GuessGame
{
    public:
        int32 GetCurrentAttempt() const;
        bool IsGameWin() const;
        GuessGame();
		Side GetSide() const;
        void SetRandomNumber();
        void ResetGame();
        int32 GetMaxTries() const;
        EGuessStatus CheckValidGuess(FString);
		void SubmitValidGuess(FString);
    private:
        int32 CurrentAttempt;
        bool bIsGameWin;
        int32 RandomNumber;
        Side first;
        void SetSide();
		CheckNumber IsNumber(FString) const;

};