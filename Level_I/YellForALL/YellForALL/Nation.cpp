#include "Nation.h"



Nation::Nation(string name) :
	name(name), land(20), food(50), troops(15),
	gold(100), people(100), farmers(0), merchants(0), blacksmith(0)
{
	
}

bool Nation::takeTurn(Nation& enemy)
{
	INFO("\nХод " << name << endl);
	people += land * 0.2;
	food += farmers - people * 0.25;
	troops += blacksmith;
	menu(enemy);
	if (land <= 0 || enemy.land <= 0)
		return false;
	return true;
}

void Nation::menu(Nation& enemy)
{
	while (true)
	{
		int input;
		INFO(" пища " << food << endl);
		INFO(" золото " << gold << endl);
		INFO(" территория " << land << endl);
		INFO(" купцы " << merchants << endl);
		INFO(" войсковые соединения " << troops << endl);
		INFO(" безработные " << people << endl);

		INFO("1) купить земли\n");
		INFO("2) нанять фермеров\n");
		INFO("3) нанять купцов\n");
		INFO("4) нанять оружейников\n");
		INFO("5) в атаку\n");
		INFO("6) сделать ход\n");

		cin >> input;

		switch (input)
		{
		case 1:
			INFO(" Вы купили " << gold / 20 << endl);
			INFO(" участков земли\n ");
			land += gold / 20;
			gold %= 20;
			INFO(" Теперь у вас  " << gold << " золота. " << endl);
			break;
		case 2:
			farmers += people;
			INFO(" Вы наняли  " << people << " фермеров. " << endl);
			people = 0;
			break;
		case 3:
			merchants += people;
			INFO(" Вы наняли  " << people << " купцов. " << endl);
			people = 0;
			break;
		case 4:
			blacksmith += people;
			INFO(" Вы наняли  " << people << " кузнецов. " << endl);
			people = 0;
			break;
		case 5:
			INFO(" Сражение затянулось до поздней ночи, и все погибли \n");
			if (troops < enemy.troops)
			{
				enemy.land += 10;
				land -= 10;
			}
			else if (troops > enemy.troops)
			{
				enemy.land -= 10;
				land += 10;
			}
			enemy.land = 0;
			land = 0;
			break;
		case 6:
			return;
		}
	}
}

