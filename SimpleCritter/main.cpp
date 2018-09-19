#include <iostream>
//#include "new_class/Critter.h"
#include "new_class/Critter.cpp"
using namespace std;

int main() {
    cout << "\nThe total number of critters is :" << Critter::sTotal << endl;
    Critter crit1;
    Critter crit2;
    Critter crit3(7);
    crit1.m_Hunger = 9;
    crit2.m_Hunger = 3;
    cout << "\nThe total number of critters is :" << Critter::GetTotal() << endl;
    cout << "crit1's hunger level is " << crit1.m_Hunger << ".\n";
    cout << "crit2's hunger level is " << crit2.m_Hunger << ".\n";
    crit1.Greet();
    crit2.Greet();
    crit3.Greet();
    return 0;
}