#pragma once
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include "Nation.h"
#include "board.h"
#include "Game.h"

#define INPUT(a) cin >> a;

using namespace std;

void cry(string& yell)
{
	cout << yell.c_str() << endl
		<< yell.c_str() << endl
		<< yell.c_str() << endl
		<< yell.c_str() << endl;
}

void pirates_and_musketers()
{
	int buddies;
	int afterBattle;
	cout << "Ты пират и разгуливаешь по кищащему преступниками\n"
		<< "городу Гаване (год 1789). Сколько с тобой дружков-пиратов? (побольше)\n";
	cin >> buddies;
	afterBattle = 1 + buddies - 10;
	cout << "Внезапно из ближайшей таверны выбегают 10 мушкетеров и\n"
		<< "обнажают свои шпаги. 10 мушкетеров и 10 пиратов погибают в\n"
		<< "схватке. Осталось лишь "
		<< (buddies + 1 - 10) << " пиратов.\n\n";
	cout << "Состояние убитых насчитывает 107 золотых монет. Это по "
		<< (107 / afterBattle) << " золотых монет на каждого. \n";
	cout << "Пираты устраивают большую пьяную драку из-за оставшихся  "
		<< (107 % afterBattle) << " золотых монет. \n";
}

void print_house()
{
	cout << "    /\\" << endl;
	cout << "   /  \\" << endl;
	cout << "  /    \\" << endl;
	cout << " /      \\" << endl;
	cout << "/        \\" << endl;
	cout << "|        |" << endl;
	cout << "| _   _  |" << endl;
	cout << "|| | | | |" << endl;
	cout << "|| | | | |" << endl;
	cout << "||_| |_| |" << endl;
	cout << "|        |" << endl;
	cout << "|________|" << endl;
}

void hello_and_summa_two()
{
	int num1, num2;
	string name;
	cout << "\nКак вас зовут ? Представьтесь - \n";
	cin >> name;
	cout << "Рады видеть вас " << name << endl;
	cout << "Введите целое число:  ";
	cin >> num1;
	cout << "\nВведите ещё целое число:  ";
	cin >> num2;
	cout << "\nСумма этих чисел =  "<<(num1 + num2)<<"\n";
}

void multiplex()
{
	int num1;
	static int count = 0;
	count++;
	cout << "Введите целое число:  ";
	cin >> num1;
	if ((num1 <=100 && num1 >1) && (num1%3 == 0))
	{
		num1 *= 2;
	} else if ((num1 <= 100 && num1 > 1) && (num1 % 3 != 0))
	{
		num1 *= 3;
	} else
	{
		num1 *= 100;
	}

	cout << "\nПосле мультиплекса число стало " << num1 << endl;
	cout << "\nФункцию мультиплекса вызывали \n" << count <<"\n раз";
}

void circle()
{
	typedef  float F;
	const F PI = 3.141592;
	F radius, circumference, area;
	cout << "\nДобро пожаловать в программу создания кругов!\n";
	cout << "\nКакой изволите определить\n" 
	     << "радиус для круга ? ";
	cin >> radius;
	area = PI * radius * radius;
	circumference = PI * (radius * 2);
	cout << "\nПлощадь круг: " << area;
	cout << "\nДлина окружности: " << circumference;
	cout << "\nСпасибо что играли в создании кругов\n";
}

void table_multi()
{
	cout << "\nТвблица умножения\n";
	cout << "   1\t2\t3\t4\t5\t6\t7\t8\t9\n";
	cout << "------------------------------------------------------------------\n";

	for (int i = 1 ; i < 10; i++)
	{
		cout << i << "| ";
		for (int j = 1; j < 10; j++)
		{
			cout << i * j << "\t";
		}
		cout << endl;

	}
}

void find_number()
{
	srand(time(0));
	int numPicked = rand() % 100 + 1;
	int guess = 0;
	int guessNum = 0;
	cout << "\n Добро пожаловать в игру \"Уагадай число\"!!!\n";
	cout << "\nЯ загадал число от 1 до 100 \n\n";
	for (guessNum = 0; guess != numPicked; guessNum++)
	{
		cout << "\nИтак какое число я загадал ?";
		cin >> guess;
		if (guess < numPicked)
		{
			cout << "\nЗагаданное число больше\n";
		}
		else if (guess > numPicked)
		{
			cout << "\nЗагаданное число меньше\n";
		}
		
	}
	cout << "\nТы угадал число за " << guessNum
	 << "\nпопыток\n";

}

void add_positive_number()
{
	cout << "\nВведите число n для сумммирования ?";
	int n = 1;
	int summary = 0, answer;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		summary += i;
	}
	answer = n * (n + 1) / 2;
	if (answer == summary)
	{
		cout << "\nAnswer is true\n" << summary;
	}
	else
	{
		cout << "\nWRONG!!!!\n";
	}
}

bool intro(string& name)
{
	cout << "\nХрабрый рыцарь !! Как тебя зовут: ";
	cin >> name;
	cout << "Нам нужна твоя помощь " << name
		<< "\nнашу деревню захватили"
		<< "\nгоблины из пещер.\n Примешь ли ты вызов ? 1) - да 2) нет	:";
	int responce = 1;
	INPUT(responce);
	return !(responce == 1);
}

void room(bool isEnemy, bool treasure, const string& description, string& enemy, string& treasure_name)
{
	while(true)
	{
		cout << description.c_str() << endl << endl;
		int response = 0;
		do
		{
			cout << "\nЧто ты желаешь сделать ?\n";
			if (isEnemy)
			{
				cout << "\n1) напасть на подлого\t" << enemy.c_str();
			}
			else if (!isEnemy)
			{
				cout << "\n1) Перейти в след. комнату\n";
				
			}
			if (treasure)
			{
				cout << "\n2) Взять сокровище " << treasure_name.c_str() << endl;
			}
			INPUT(response);
		} while (response < 1 || response > 2);
		switch (response)
		{
		case 1:
			if (isEnemy)
			{
				isEnemy = !isEnemy;
				cout << "\nты убил смертоносного " << enemy.c_str() << endl;
			}
			else if (!isEnemy)
			{
				return;
			}
			break;
		case 2:
			treasure = !treasure;
			cout << "\n Ты взял " << treasure_name.c_str() << endl;
			break;;
		}
	}
}

void travel_in_cave()
{
	string name = "";
	string enemy_name;
	string treasure_name;

	const string room1 = "Ты проник через вход в пещеры";
	const string room2 = "Ты продвигаешься дальше вглубь";
	const string room3 = "Ты достиг предельных глубин пещеры.";

	if (!intro(name))
	{
		treasure_name = "золотой меч";
		enemy_name = "боб гоблин";
		room(true, true, room1, enemy_name, treasure_name);
		enemy_name = "жена";
		room(true, false, room2, enemy_name, treasure_name);
		enemy_name = "тёща";
		treasure_name = "груда сокровищ";
		room(true, true, room3, enemy_name, treasure_name);
	}

}

void civilization()
{
	string temp;
	cout << "\nДобро пожаловать в игру Завоевание\n";
	cout << "\nИгрок 1 введите своё имя\n";
	cin >> temp;
	Nation nation1(temp);
	cout << "\nДобро пожаловать в игру Завоевание\n";
	cout << "\nИгрок 2 введите своё имя\n";
	cin >> temp;
	Nation nation2(temp);

	while(nation1.take_turn(nation2) && nation2.take_turn(nation1))
	{
		
	}
}

void tictactoe()
{
	GameBoard* gb = new GameBoard;
	Game game;
	string player1, player2;
	cout << "Добро пожаловать в крестики - нолики!"
		<< "\n Игрок один, введите своё имя: ";
	INPUT(player1);
	cout << "\n Игрок два, введите своё имя: ";
	INPUT(player2);
	gb->draw();
	while (gb->isLine() == GameBoard::blank)
	{
		gb = game.doInput("один", gb);
		gb = game.doInput("два", gb);
		gb->draw();
	}
	
	if (gb->isLine() == GameBoard::X)
	{
		cout << "\n Игрок один, вы победили!"
			<< "\Конец игры";
	}
	else
	{
		cout << "\n Игрок два, вы победили!"
			<< "Конец игры";
	}
}