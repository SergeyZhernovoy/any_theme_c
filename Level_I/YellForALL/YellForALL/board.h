#pragma once
#include <iostream>

enum SquareState 
{
	Empty = ' ', 
	X = 'X', 
	O = 'O'
};

class GameBoard
{
private:
	const int WIDTH;
	const int HEIGHT;
	int* board;
public:
	enum state { };
	GameBoard() : WIDTH(3), HEIGHT(3)
	{
		board = new int[9];
		for (int i = 0; i < 9; i++)
		{
			*(board + i) = SquareState::Empty;
		}
	}

	~GameBoard() { delete[] board;}
	void setX(int h, int w);
	void setO(int h, int w);
	bool isTaken(int h, int w) const;
	SquareState isLine() const;
	void draw() const;
};


