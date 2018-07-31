/*
    cyberdemon.h header file
    Stacey Rivet Beck 5/8/17
    110B, a_15
 
 */

#ifndef CYBERDEMON_H
#define CYBERDEMON_H
#include "demon.h"
#include <iostream>
namespace cs_creature {

class cyberdemon: public demon {
    public:
        cyberdemon();
        cyberdemon(const int& newHitPoints, const int& newStrength);
        virtual string getSpecies() const;
};
}

#endif
