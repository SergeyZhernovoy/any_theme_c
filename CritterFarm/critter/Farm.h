//
// Created by dort on 20.09.18.
//

#ifndef CRITTERFARM_FARM_H
#define CRITTERFARM_FARM_H

#endif //CRITTERFARM_FARM_H
#include <vector>
#include "Critter.h"
#include <iostream>

class Farm
{
    private:
        vector<Critter> mCritters;
    public:
        Farm(int spaces = 1);
        void Add(const Critter& aCritter);
        void RollCall() const;
};

Farm::Farm(int spaces)
{
    mCritters.reserve(spaces);
}

void Farm::Add(const Critter &aCritter)
{
    mCritters.push_back(aCritter);
}

void Farm::RollCall() const
{
    for (vector<Critter>::const_iterator iter = mCritters.begin(); iter != mCritters.end(); iter++)
    {
        cout << iter->GetName() << " here.\n";
    }
}