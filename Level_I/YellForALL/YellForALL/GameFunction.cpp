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
	cout << "�� ����� � ������������ �� �������� �������������\n"
		<< "������ ������ (��� 1789). ������� � ����� �������-�������? (��������)\n";
	cin >> buddies;
	afterBattle = 1 + buddies - 10;
	cout << "�������� �� ��������� ������� �������� 10 ���������� �\n"
		<< "�������� ���� �����. 10 ���������� � 10 ������� �������� �\n"
		<< "�������. �������� ���� "
		<< (buddies + 1 - 10) << " �������.\n\n";
	cout << "��������� ������ ����������� 107 ������� �����. ��� �� "
		<< (107 / afterBattle) << " ������� ����� �� �������. \n";
	cout << "������ ���������� ������� ������ ����� ��-�� ����������  "
		<< (107 % afterBattle) << " ������� �����. \n";
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
	cout << "\n��� ��� ����� ? ������������� - \n";
	cin >> name;
	cout << "���� ������ ��� " << name << endl;
	cout << "������� ����� �����:  ";
	cin >> num1;
	cout << "\n������� ��� ����� �����:  ";
	cin >> num2;
	cout << "\n����� ���� ����� =  "<<(num1 + num2)<<"\n";
}

void multiplex()
{
	int num1;
	static int count = 0;
	count++;
	cout << "������� ����� �����:  ";
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

	cout << "\n����� ������������ ����� ����� " << num1 << endl;
	cout << "\n������� ������������ �������� \n" << count <<"\n ���";
}

void circle()
{
	typedef  float F;
	const F PI = 3.141592;
	F radius, circumference, area;
	cout << "\n����� ���������� � ��������� �������� ������!\n";
	cout << "\n����� �������� ����������\n" 
	     << "������ ��� ����� ? ";
	cin >> radius;
	area = PI * radius * radius;
	circumference = PI * (radius * 2);
	cout << "\n������� ����: " << area;
	cout << "\n����� ����������: " << circumference;
	cout << "\n������� ��� ������ � �������� ������\n";
}

void table_multi()
{
	cout << "\n������� ���������\n";
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
	cout << "\n ����� ���������� � ���� \"������� �����\"!!!\n";
	cout << "\n� ������� ����� �� 1 �� 100 \n\n";
	for (guessNum = 0; guess != numPicked; guessNum++)
	{
		cout << "\n���� ����� ����� � ������� ?";
		cin >> guess;
		if (guess < numPicked)
		{
			cout << "\n���������� ����� ������\n";
		}
		else if (guess > numPicked)
		{
			cout << "\n���������� ����� ������\n";
		}
		
	}
	cout << "\n�� ������ ����� �� " << guessNum
	 << "\n�������\n";

}

void add_positive_number()
{
	cout << "\n������� ����� n ��� ������������� ?";
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
	cout << "\n������� ������ !! ��� ���� �����: ";
	cin >> name;
	cout << "��� ����� ���� ������ " << name
		<< "\n���� ������� ���������"
		<< "\n������� �� �����.\n ������� �� �� ����� ? 1) - �� 2) ���	:";
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
			cout << "\n��� �� ������� ������� ?\n";
			if (isEnemy)
			{
				cout << "\n1) ������� �� �������\t" << enemy.c_str();
			}
			else if (!isEnemy)
			{
				cout << "\n1) ������� � ����. �������\n";
				
			}
			if (treasure)
			{
				cout << "\n2) ����� ��������� " << treasure_name.c_str() << endl;
			}
			INPUT(response);
		} while (response < 1 || response > 2);
		switch (response)
		{
		case 1:
			if (isEnemy)
			{
				isEnemy = !isEnemy;
				cout << "\n�� ���� ������������� " << enemy.c_str() << endl;
			}
			else if (!isEnemy)
			{
				return;
			}
			break;
		case 2:
			treasure = !treasure;
			cout << "\n �� ���� " << treasure_name.c_str() << endl;
			break;;
		}
	}
}

void travel_in_cave()
{
	string name = "";
	string enemy_name;
	string treasure_name;

	const string room1 = "�� ������ ����� ���� � ������";
	const string room2 = "�� ������������� ������ ������";
	const string room3 = "�� ������ ���������� ������ ������.";

	if (!intro(name))
	{
		treasure_name = "������� ���";
		enemy_name = "��� ������";
		room(true, true, room1, enemy_name, treasure_name);
		enemy_name = "����";
		room(true, false, room2, enemy_name, treasure_name);
		enemy_name = "���";
		treasure_name = "����� ��������";
		room(true, true, room3, enemy_name, treasure_name);
	}

}

void civilization()
{
	string temp;
	cout << "\n����� ���������� � ���� ����������\n";
	cout << "\n����� 1 ������� ��� ���\n";
	cin >> temp;
	Nation nation1(temp);
	cout << "\n����� ���������� � ���� ����������\n";
	cout << "\n����� 2 ������� ��� ���\n";
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
	cout << "����� ���������� � �������� - ������!"
		<< "\n ����� ����, ������� ��� ���: ";
	INPUT(player1);
	cout << "\n ����� ���, ������� ��� ���: ";
	INPUT(player2);
	gb->draw();
	while (gb->isLine() == GameBoard::blank)
	{
		gb = game.doInput("����", gb);
		gb = game.doInput("���", gb);
		gb->draw();
	}
	
	if (gb->isLine() == GameBoard::X)
	{
		cout << "\n ����� ����, �� ��������!"
			<< "\����� ����";
	}
	else
	{
		cout << "\n ����� ���, �� ��������!"
			<< "����� ����";
	}
}