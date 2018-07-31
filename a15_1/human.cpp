/*
    human.cpp
    Stacey Rivet Beck 5/8/17
    110B, a_15
 */

#include "creature.h"
#include "human.h"
#include <iostream>
#include <string>
using namespace std;

namespace cs_creature {

    
    
    
    
    
human::human() : creature()
{
    setStrength(10);
    setHitPoints(10);
}

    
    
    
    
    
human :: human (const int& newStrength, const int& newHitPoints)
: creature(newStrength, newHitPoints)
{
    //empty
}

    
    
    
    

string human :: getSpecies() const
{
    return "human";
}

}

