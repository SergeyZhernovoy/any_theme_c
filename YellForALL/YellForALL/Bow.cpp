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
	ECHO(color << " лук: тетива натянута.\n");
}

int Bow::fire()
{
	if (!drawn)
	{
		ECHO(color << "лук: тетива не натянута, не возможно произвести выстрел\n");
		return 0;
	}
	int score = rand() % (10 -0 + 1) + 0;
	if (score == 0)
	{
		ECHO(color << "лук: промах\n");
	}
	else
	{
		ECHO(color << "лук: выбил" << score << " оков\n");
	}
	return score;
}
