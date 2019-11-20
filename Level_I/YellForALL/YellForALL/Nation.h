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
	void menu(Nation&);
public:
	int land;
	int troops;
	Nation(string name);
	Nation();
	bool takeTurn(Nation&);

};

