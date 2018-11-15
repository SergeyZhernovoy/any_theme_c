#include "Bow.h"

Bow::Bow(std::string color)
{
	num_of_arrows = 10;
	drawn = false;
	this->color = color;
	srand((unsigned)time(0));
}

Bow::~Bow()
{
	
}

void Bow::draw()
{
	drawn = true;
	ECHO(color << " ���: ������ ��������.\n");
}

int Bow::fire()
{
	if (!drawn)
	{
		ECHO(color << "���: ������ �� ��������, �� �������� ���������� �������\n");
		return 0;
	}
	int score = rand() % (10 -0 + 1) + 0;
	if (score == 0)
	{
		ECHO(color << "���: ������\n");
	}
	else
	{
		ECHO(color << "���: �����" << score << " ����\n");
	}
	return score;
}
