#pragma once
#include "dragon.h"
class RedDragon : public Dragon
{

private:
	int fireDamage;
public:
	RedDragon(int theSize);
	int attack(int targetArmor);
	void defend(int damage);
	string getName() { return "Red dragon"; }
};

class BlueDragon : public Dragon
{

private:
	int iceDamage;
public:
	BlueDragon(int theSize);
	int attack(int targetArmor);
	void defend(int damage);
	string getName() { return "Blue dragon"; }
};

class BlackDragon : public Dragon
{
private:
	int poisonDamage;
public:
	BlackDragon(int theSize);
	int attack(int targetArmor);
	void defend(int damage);
	string getName() { return "Black dragon"; }
};