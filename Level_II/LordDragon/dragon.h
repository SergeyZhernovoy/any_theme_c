#pragma once
#include <string>
#include <ctime>
#include <cstdlib>

#ifndef DRAGON_H
#define DRAGON_H

#endif // DRAGON_H
#define MAX(a,b)  a>b?a:b
using namespace std;

class Dragon
{
private:
	int speed;
	string name;
	int hitPoints;
	int armor;
	int treasure;
	int clawDamage;
	int size;
protected:
	Dragon(int theSize);
	int getArmor() const { return armor; }
	int& getHitPoints() { return hitPoints; }
	int getClawDamage() const { return clawDamage; }
	int getSize() const { return size; }
	virtual int attack(int targetArmor, int specialDamage);
public:
	virtual int attack(int targetArmor) = 0;
	virtual void defend(int damage) = 0;
	virtual string getName() { return name; }
	int getSpeed() const { return speed; }
	bool isAlive() const { return hitPoints > 0; }
};
