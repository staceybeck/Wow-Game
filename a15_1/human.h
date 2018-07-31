/*
    human.h
    Stacey Rivet Beck 5/8/17
    110B, a_15
 */

#ifndef HUMAN_H
#define HUMAN_H
#include "creature.h"
#include <string>
#include <iostream>
using namespace std;

namespace cs_creature {

class human: public creature {
    public:
        human();
        human(const int& newStrength, const int& newHitPoints);
        virtual string getSpecies() const; // returns creature
};
}
#endif
