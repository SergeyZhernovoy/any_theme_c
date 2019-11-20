// LordDragon.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <ctime>
#include <cstdlib>
#include "dragon.h"
#include "derrived_dragons.h"

using namespace std;

int menuChoice();

int main()
{	
	setlocale(LC_ALL, "russian");
	srand(time(0));
	Dragon* dragons[3];
	int hp = 15;
	int armour = 2;
	int tempArmour;
	int tempAttack;
	dragons[0] = new RedDragon(rand() % 4 + 1);
	dragons[1] = new BlueDragon(rand() % 4 + 1);
	dragons[2] = new BlackDragon(rand() % 4 + 1);
	Dragon* d = dragons[rand() % 3];
	cout << "\nДобро пожаловать, благородный рыцарь."
		<< "\nТы должен спасти принцессу."
		<< "\nЕё похитил  "
		<< d -> getName() <<".\n"
		<< "Ты должен победить дракона.\n"
		<< "Твоя сила:" << hp << endl;
	while (d->isAlive() && hp > 0) 
	{
		int choice = menuChoice();
		if (choice == 3)
		{
			goto RUN;
		}
		else
			if (choice == 1)
			{
				tempAttack = rand() % 16 + 5;
				tempArmour = armour;
			}
			else
			{
				tempAttack = rand() % 11;
				tempArmour = armour + 4;
			}
		hp -= d->attack(armour);
		d->defend(rand() % 16 - 5);
		cout << "\nТы наносишь мощный удар и ущерб";
		cout << "\n " << tempAttack << " damage.";
		cout << "\nТвоя сила: " << hp;
	}
	if (d->isAlive())
	{

		cout << "\nТы побеждён"
			<< " могущественным драконом";
	}
	else
	{
		cout << "\nТы убил дракона!"
			<< "\nПоздравляем. Принцесса спасена.";
	}
	return 0;
	RUN: 
	cout << "\nТы струсил и убежал. Не плохо циничный герой !! Ха-ха-ха";
		return 0;
		 
}

int menuChoice()
{
	int choice;
	do
	{
		cout << endl
			<< "[1]Атаковать\n"
			<< "[2]Обороняться\n"
			<< "[3]Бежать\n";
		cin >> choice;
	}
	while (choice < 1 && choice > 3);
	return choice;
}