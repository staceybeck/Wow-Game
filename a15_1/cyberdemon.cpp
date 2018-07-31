//  cyberdemon.cpp
//  a15_1
//  Created by Stacey Rivet on 5/8/17.

#include "demon.h"
#include "cyberdemon.h"
#include <iostream>
#include <string>
using namespace std;

namespace cs_creature {



    
    
    
cyberdemon::cyberdemon() : demon () 
{
    setStrength(10);
    setHitPoints(10);
}

    
    
    
    
    
cyberdemon :: cyberdemon (const int& newHitPoints, const int& newStrength)
: demon (newHitPoints, newStrength)

{
   //empty
}


    
    
    
    
string cyberdemon::getSpecies() const
{
    return "cyberdemon";
}

}

