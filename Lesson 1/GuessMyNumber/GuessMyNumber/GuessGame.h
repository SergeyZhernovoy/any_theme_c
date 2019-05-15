#include <cstdlib>
#include <ctime>

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

class GuessGame
{
    public:
        int32 GetCurrentAttempt() const;
        bool isGameWin() const;
        GuessGame(uint32);
        void StartGame();
        void SetNumber(int32);
        void ResetGame();
        int32 GetMaxTries() const;
        EGuessStatus CheckValidGuess(FString);
    private:
        int32 CurrentAttempt;
        bool bIsGameWin;
        int32 RandomNumber;
        Side first;
        void SetSide();
        bool IsNumber(FString) const;

}

