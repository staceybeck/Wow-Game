/*
    elf.cpp
    Stacey Rivet Beck 5/8/17
    110B, a_15
*/

#include "creature.h"
#include "elf.h"
#include <iostream>
#include <string>
using namespace std;
namespace cs_creature {

    
    
    
    

elf :: elf() : creature()
{
    setStrength(10);
    setHitPoints(10);
}

    
    
    
    
    
elf :: elf (const int& newHitPoints, const int& newStrength)
: creature(newHitPoints, newStrength)
{
    //empty
}

    
    
    
    
    

string elf :: getSpecies() const
{
    return "elf";
}


    
    
    

int  elf ::getDamage() const
{
    int damage = creature::getDamage();
    if ((rand() % 2) == 0)
    {
        cout << "Magical attack inflicts " << damage <<
        " additional damage points!" << endl;
        damage *= 2;
    }
    
    return damage;
}

}
