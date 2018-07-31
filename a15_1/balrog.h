/*
    balrog.h header file 
    Stacey Rivet Beck 5/8/17
    110B, a_15
 */

#ifndef balrog_h
#define balrog_h
#include "demon.h"
#include <iostream>

namespace cs_creature {

class balrog: public demon {
    public:
        balrog();
        balrog(const int& newHitPoints, const int& newStrength);
        virtual int getDamage() const;
        virtual string getSpecies() const;
};
}

#endif
