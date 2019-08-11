#pragma once
#include <iostream>

class GameBoard
{
private:
	const int WIDTH;
	const int HEIGHT;
	int* board;
public:
	enum state { blank = ' ', X = 'X', O = 'O' };
	GameBoard() : WIDTH(3), HEIGHT(3)
	{
		board = new int[9];
		for (int i = 0; i < 9; i++)
		{
			board[i] = blank;
		}
	}

	~GameBoard() { delete[] board;}
	void setX(int h, int w);
	void setO(int h, int w);
	bool isTaken(int h, int w) const;
	state isLine() const;
	void draw() const;
};


