/*
    balrog.cpp
    Stacey Rivet Beck 5/8/17
    110B, a_15

*/

#include "demon.h"
#include "balrog.h"
#include <iostream>
#include <string>
using namespace std;

namespace cs_creature {

    
    
    
    
    
balrog::balrog() : demon ()
{
    
    setStrength(10);
    setHitPoints(10);
}



    
    
    
balrog :: balrog (const int& newHitPoints, const int& newStrength)
: demon (newHitPoints, newStrength)

{
    //empty
}




    
    
string balrog :: getSpecies() const
{
    return "balrog";
}



    
    
    
int balrog :: getDamage() const
{
    int damage = demon :: getDamage();
    int damage2 = 0;
    
    damage2 = (rand() % damage) + 1;
    cout << "Balrog speed attack inflicts " << damage2 <<
    " additional damage points!" << endl;
    
    return damage + damage2;
}
}
