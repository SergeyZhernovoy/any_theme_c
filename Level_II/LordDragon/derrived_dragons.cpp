#include "derrived_dragons.h"

RedDragon::RedDragon(int theSize)
	:Dragon(theSize)
{
	fireDamage = 4 * getSize();
}

int RedDragon::attack(int targetArmor)
{
	return Dragon::attack(targetArmor, fireDamage);
}

void RedDragon::defend(int damage)
{
	getHitPoints() -= (damage - getArmor()) / 3;
}

BlueDragon::BlueDragon(int theSize):Dragon(theSize)
{
	iceDamage = 3 * getSize();
}

int BlueDragon::attack(int targetArmor)
{
	return Dragon::attack(targetArmor, iceDamage);
}

void BlueDragon::defend(int damage)
{
	getHitPoints() -= (damage - getArmor()) / 2;
}

BlackDragon::BlackDragon(int theSize):
	Dragon(theSize)
{
	poisonDamage = getSize();
}

int BlackDragon::attack(int targetArmor)
{
	return Dragon::attack(targetArmor, poisonDamage);
}

void BlackDragon::defend(int damage)
{
	getHitPoints() -= damage - getArmor();
}
