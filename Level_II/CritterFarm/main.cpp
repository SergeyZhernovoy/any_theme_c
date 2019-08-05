#include <iostream>
#include <string>
#include "critter/Farm.h"

using namespace std;

void Peek(const Critter& critter);
ostream& operator<<(ostream& os, const Critter& critter);

int main() {
    Critter crit("Poochie");
    cout << "My critter's name is " << crit.GetName() << endl;
    cout << "\n Creating critter farm.\n";
    Farm myFarm(3);
    cout << "\nAdding three critters to the farm.\n";
    myFarm.Add(Critter("Moe"));
    myFarm.Add(Critter("Larry"));
    myFarm.Add(Critter("Curly"));
    cout <<"\nCalling Roll...\n";
    myFarm.RollCall();

    cout << "\nNext task\n\n";
    cout << "Calling Peek() to access critters private data member , mName: \n";
    Peek(crit);
    cout << "\nSending crit object to cout with the << operator:\n";
    cout << crit;

    return 0;
}

void Peek(const Critter& critter)
{
    cout << critter.mName;
}

ostream& operator<<(ostream& os, const Critter& critter)
{
    os << "Criter object - ";
    os << "mName: " << critter.mName;
    return os;
}