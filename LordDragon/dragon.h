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


class RedDragon : public Dragon
{
private:
    int fireDamage;
public:
    RedDragon(int ThrSize);
    int attack(int targetArmor);
    void defend(int damage);
    string getName() {return "Red dragon";}
}

