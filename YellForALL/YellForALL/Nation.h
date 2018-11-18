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
	void menu(Nation& other);
public:
	int land;
	int troops;
	Nation(string name);
	bool take_turn(Nation& other);
};