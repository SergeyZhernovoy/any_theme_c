#pragma once
#include <iostream>
#include <string>
#define INFO(text) cout << text

using namespace std;

class Nation
{
private:
	string name;
	int food;
	int gold;
	int people;
	int farmers;
	int merchants;
	int blacksmith;
	void menu();
public:
	int land;
	int troops;
	Nation* nation_secon;

	Nation(string name);
	Nation();
	bool take_turn();
	void set_another_nation(Nation* next);
};