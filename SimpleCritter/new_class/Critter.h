//
// Created by dort on 19.09.18.
//


#ifndef SIMPLECRITTER_CRITTER_H
#define SIMPLECRITTER_CRITTER_H

#endif //SIMPLECRITTER_CRITTER_H
class Critter
{
    public:
        int m_Hunger;
        static int sTotal;
        Critter(int hunger = 0);
        void Greet();
        int GetHunger() const;
        static int GetTotal();
};

