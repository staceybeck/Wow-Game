/*
    demon.h 
    derives cyberdemon, balrog
    Stacey Rivet Beck 5/8/17
    110B, a_15
 
*/

#ifndef DEMON_H
#define DEMON_H
#include <string>
#include <iostream>
#include "creature.h"
using namespace std;

namespace cs_creature {
    
class demon : public creature {
    public:
        demon();
        demon(const int& newHitPoints, const int& newStrength);
        virtual int getDamage() const;
        virtual string getSpecies() const;
};
}
#endif
