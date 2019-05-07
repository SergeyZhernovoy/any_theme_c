#include "dragon.h"

Dragon::Dragon(int theSize):size(TheSize)
{
    if (size < 1 || size > 4)
    {
       size = 3;
    }
    clawDamage = 2 * size;
    speed = 4 * size;
    hitPoints = 4 * size;
    armor = size;
    treasure = 1000 * size;
    srand(time(0));
}

int Dragon::attack(int targetArmor, int specialDamage)
{
    int useSpecial = rand()%2;
    int damage;
    if (useSpecial)
    {
        damage = specialDamage;
    }
    else
    {
        damage = getClawDamage();
    }
    return MAX(damage - targetArmor, 0);
}
