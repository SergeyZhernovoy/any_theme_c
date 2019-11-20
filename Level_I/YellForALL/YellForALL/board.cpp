#include "board.h"

#define X SquareState::X
#define O SquareState::O 

void GameBoard::setX(int h, int w)
{
	*(board + h * HEIGHT + w) = X;
}

void GameBoard::setO(int h, int w)
{
	*(board + h * HEIGHT + w) = O;
}

bool GameBoard::isTaken(int h, int w) const
{
	return *(board + h * HEIGHT + w) != SquareState::Empty;
}

SquareState GameBoard::isLine() const
{
	if (*board == X && *(board + 1) == X && *(board + 2) == X)
		return X;
	if (*board == O && *(board + 1) == O && *(board + 2) == O)
		return O;
	if (*(board + 3) == X && *(board + 4) == X && *(board + 5) == X)
		return X;
	if (*(board + 3) == O && *(board + 4) == O && *(board + 5) == O)
		return O;
	if (*(board + 6) == X && *(board + 7) == X && *(board + 8) == X)
		return X;
	if (*(board + 6) == O && *(board + 7) == O && *(board + 8) == O)
		return O;
	if (*board == X && *(board + 3) == X && *(board + 6) == X)
		return X;
	if (*board == O && *(board + 3) == O && *(board + 6) == O)
		return O;
	if (*(board + 1) == X && *(board + 4) == X && *(board + 7) == X)
		return X;
	if (*(board + 1) == O && *(board + 4) == O && *(board + 7) == O)
		return O;
	if (*(board + 2) == X && *(board + 5) == X && *(board + 8) == X)
		return X;
	if (*(board + 2) == O && *(board + 5) == O && *(board + 8) == O)
		return O;
	if (*board == X && *(board + 4) == X && *(board + 8) == X)
		return X;
	if (*board == O && *(board + 4) == O && *(board + 8) == O)
		return O;
	if (*(board + 2) == X && *(board + 4) == X && *(board + 6) == X)
		return X;
	if (*(board + 2) == O && *(board + 4) == O && *(board + 6) == O)
		return O;
	return SquareState::Empty;

}

void GameBoard::draw() const
{
	std::cout << std::endl;
	for (int i = 0; i < HEIGHT; i++)
	{
		std::cout << (char)*(board + i * HEIGHT);
		for (int j = 1; j < WIDTH ; j++)
		{
			std::cout << " | " << (char)*(board + i * WIDTH + j);
		}
		std::cout << std::endl << "-----------" << std::endl;
	}

}