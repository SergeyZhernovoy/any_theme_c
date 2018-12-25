#include <string>
#include <ctime>
#include <cstdlib>

#ifndef DRAGON_H
#define DRAGON_H

#endif // DRAGON_H

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
    int getArmor() {return armor;}
    int& getHitPoints() {return hitPoints;}
    int getClawDamage() {return clawDamage;}
    int getSize() {return size;}
    virtual int attack(int targetArmor, int specialDamage);
public:
    virtual int attack(int targetArmor) = 0;
    virtual void defend(int damage) = 0;
    virtual string getName() {return name;}
    int getSpeed() {return speed;}
    bool isAlive() {return hitPoints > 0;}
};

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
    srand()time(0);
}

int Dragon::attack(int targetArmor, int specialDamage)
{

}


