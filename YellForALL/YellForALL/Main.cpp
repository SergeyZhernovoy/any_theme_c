#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "GameFunction.h"

using namespace std;

void print_menu();

int main()
{
	setlocale(LC_ALL, "Russian");

	int game = 0;
	print_menu();
	cin >> game;
	string yell = "Спасайтесь, летит дракон !";
	enum GAMES { CRY, PIRATES, HOUSE, SUMMA, MULTIPLEX, CIRCLE, TABLE_MULTI, GUESS, SUMMARY, TRAVEL_IN_CAVE, CIVILIZATION, TICTACTOE, EXIT };
	while(game != EXIT)
	{
		switch(game)
		{
		case CRY:
			cry(yell);
			break;
		case PIRATES:
			pirates_and_musketers();
			break;
		case HOUSE:
			print_house();
			break;
		case SUMMA:
			hello_and_summa_two();
			break;
		case MULTIPLEX:
			multiplex();
			multiplex();
			break;
		case CIRCLE:
			circle();
			break;
		case TABLE_MULTI:
			table_multi();
			break;
		case GUESS:
			find_number();
			break;
		case SUMMARY:
			add_positive_number();
			break;
		case TRAVEL_IN_CAVE:
			travel_in_cave();
			break;
		case CIVILIZATION:
			civilization();
			break;
		case TICTACTOE:
			tictactoe();
			break;
		}
		print_menu();
		cin >> game;
	}

	return 0;
}

void print_menu()
{
	
	vector<string> menu;
	menu.push_back("0. cry");
	menu.push_back("1. pirates");
	menu.push_back("2. print house");
	menu.push_back("3. hello and summa");
	menu.push_back("4. multiplex source number");
	menu.push_back("5. circle");
	menu.push_back("6. table multi");
	menu.push_back("7. guess number");
	menu.push_back("8. summary");
	menu.push_back("9. travel in cave");
	menu.push_back("10. civilization");
	menu.push_back("11. tic tac toe");
	menu.push_back("12. exit");

	cout << "\nВыбери игру\n";
	for(string tier : menu)
	{
		cout << "\n"<<tier<<"\n";
	}
}
