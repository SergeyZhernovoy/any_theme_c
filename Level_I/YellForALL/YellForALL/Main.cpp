#pragma once
#include "pch.h"
#include <iostream>
#include <string>
#include <vector>
#include "GameFunction.h"
#include "EduNamespace.h"
#include "MenuUtility.h"


using namespace std;

vector<string> get_menu();

int main()
{
	setlocale(LC_ALL, "Russian");

	callers::echo();

	int game = menuNamespace::menu(get_menu());
	
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
		game = menuNamespace::menu(get_menu());
	}

	return 0;
}

vector<string> get_menu()
{
	vector<string> menu;
	menu.push_back("cry");
	menu.push_back("pirates");
	menu.push_back("print house");
	menu.push_back("hello and summa");
	menu.push_back("multiplex source number");
	menu.push_back("circle");
	menu.push_back("table multi");
	menu.push_back("guess number");
	menu.push_back("summary");
	menu.push_back("travel in cave");
	menu.push_back("civilization");
	menu.push_back("tic tac toe");
	menu.push_back("exit");
	return menu;
}
