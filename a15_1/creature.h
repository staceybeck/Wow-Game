/*
    creature.h 
    base class for demon, human, elf
    Stacey Rivet Beck 5/8/17
    110B, a_15
*/

#ifndef CREATURE_H
#define CREATURE_H

#include <string>
#include <iostream>
using namespace std;

namespace cs_creature {

class creature {
    public:
        creature();
        creature(const int& newStrength, const int& newHitPoints);
        virtual int getDamage() const;
        virtual string getSpecies() const = 0;
        int getStrength() const;
        int getHitpoints() const;
        void setStrength(const int& newStrength);
        void setHitPoints(const int& newHitPoints);
        int battleArena (creature& creature1, creature& creature2);
    private:
        int hitPoints;
        int strength;
};
    
void battleArena (creature& creature1, creature& creature2);
    
}

#endif
