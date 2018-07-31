/*
    elf.h
    Stacey Rivet Beck 5/8/17
    110B, a_15
 */

#ifndef ELF_H
#define ELF_H
#include "creature.h"
#include <string>
#include <iostream>
using namespace std;

namespace cs_creature {

class elf: public creature {
    public:
        elf();
        elf(const int& newHitPoints, const int& newStrength);
        virtual int getDamage() const;
        string getSpecies() const;
};
}
#endif
