/*
    demon.cpp
    Stacey Rivet Beck 5/8/17
    110B, a_15
 */

#include "creature.h"
#include "demon.h"
#include <iostream>
#include <string>
using namespace std;

namespace cs_creature {

    
    
    
    
    
demon :: demon() : creature()
{
    // empty
}


    
    
    
    
demon :: demon (const int& newHitPoints, const int& newStrength) :
    creature(newHitPoints, newStrength)
{
    //empty
}


    
    
    
    
string demon :: getSpecies() const
{
    return "demon";
}

    
    
    


int demon :: getDamage() const
{
    int damage = creature :: getDamage();
    if (rand() % 4 == 0)
    {
        damage += 50;
        cout << "Demonic attack inflicts 50 additional damage points!" << endl;
    }
    return damage;
}
}
