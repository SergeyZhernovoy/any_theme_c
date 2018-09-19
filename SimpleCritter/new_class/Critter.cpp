//
// Created by dort on 19.09.18.
//

#include <iostream>
#include "Critter.h"

void Critter::Greet() {
    std::cout << "Hi. I'm a critter. My hunger level is " << m_Hunger << "\n";
}

Critter::Critter(int hunger)
{
    std::cout << "\n A new critter has been born!\n";
    m_Hunger = hunger;
    sTotal++;
}

int Critter::GetHunger() const
{
    return m_Hunger;
}

int Critter::sTotal = 0;

int Critter::GetTotal()
{
    return sTotal;
}