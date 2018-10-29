#include "Nation.h"
Nation::Nation(string name) :
	name(name), land(20), food(50), troops(15),
	gold(100), people(100), farmers(0), merchants(0), blacksmith(0)
{
	
}

bool Nation::take_turn()
{
	INFO("\n���" << name << endl);
	people += land * 0.2;
	food += farmers - people * 0.25;
	troops += blacksmith;
	menu();
	if (land <= 0 || nation_secon->land <= 0)
		return false;
	return true;
}

void Nation::menu()
{
	while (true)
	{
		int input;
		INFO(" ���� " << food << endl);
		INFO(" ����� " << gold << endl);
		INFO(" ���������� " << land << endl);
		INFO(" ����� " << merchants << endl);
		INFO(" ��������� ���������� " << troops << endl);
		INFO(" ����������� " << people << endl);

		INFO("1) ������ �����\n");
		INFO("2) ������ �������� \n");
		INFO("3) ������ ������ \n");
		INFO("4) ������ ����������� \n");
		INFO("5) � �����\n");
		INFO("6) ������� ��� \n");

		cin >> input;

		switch (input)
		{
		case 1:
			INFO(" �� ������ " << gold / 20 << endl);
			INFO(" ������� �����\n ");
			land += gold / 20;
			gold %= 20;
			INFO(" ������ � ���  " << gold << " ������. " << endl);
			break;
		case 2:
			farmers += people;
			INFO(" �� ������  " << people << " ��������. " << endl);
			people = 0;
			break;
		case 3:
			merchants += people;
			INFO(" �� ������  " << people << " ������. " << endl);
			people = 0;
			break;
		case 4:
			blacksmith += people;
			INFO(" �� ������  " << people << " ��������. " << endl);
			people = 0;
			break;

		case 5:
			INFO(" �������� ���������� �� ������� ����, � ��� ������� \n");
			if (troops < nation_secon->troops)
			{
				land -= 10;
				nation_secon->land += 10;
			}
			else if (troops > nation_secon->troops)
			{
				land += 10;
				nation_secon->land -= 10;
			}
			troops = 0;
			nation_secon->troops = 0;
			break;
		case 6:
			return;
		}
	}
}

void Nation::set_another_nation(Nation* next)
{
	nation_secon = next;
}