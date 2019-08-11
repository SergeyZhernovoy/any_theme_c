#include <iostream>
#include "Game.h"

GameBoard* Game::doInput(std::string player, GameBoard * gb)
{
	gb->draw();
	std::string letter;
	if (player.compare("����") == 0)
	{
		letter = "X";
	}
	else if (player.compare("���") == 0)
	{
		letter = "O";
	}
	else
		return gb;

	int input1, input2;

	do
	{
		do
		{
			std::cout << "����� " << player.c_str()
				<< " , ����������, ������� ����� ���� ��� "
				<< letter.c_str() << ": ";
			std::cin >> input1;
		} while (!inRange(input1));
		do
		{
			std::cout << "����� " << player.c_str()
				<< " , ����������, ������� ����� ������� ��� "
				<< letter.c_str() << ": ";
			std::cin >> input2;
		} while (!inRange(input2));
	} while (gb->isTaken(input1, input2));

	if (player.compare("����") == 0)
	{
		gb->setX(input1, input2);
	} 
	else
	{
		gb->setO(input1, input2);
	}
	return gb;
}

bool Game::inRange(int test) const
{
	return test > -1 && test < 3;
}
