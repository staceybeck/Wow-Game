/*
    creature.cpp
    Stacey Rivet Beck 5/8/17
    110B, a_15
*/

#include "creature.h"
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

namespace cs_creature {





    
creature::creature() :
    strength(0),
    hitPoints(0)
{
    // empty
}







creature :: creature(const int& newStrength, const int& newHitPoints) :
    strength(newStrength),
    hitPoints(newHitPoints)
{
    // empty
}






int creature :: getStrength() const
{
    
    return strength;
}







int creature :: getHitpoints() const
{
    return hitPoints;
}





    
    
int creature::getDamage() const {
    int damage = 0;
    
    damage = (rand() % strength) + 1;
    
    cout << "The " << getSpecies() <<
    " attacks for " << damage << " points!" << endl;
    
    return damage;
}







void creature :: setStrength(const int& newStrength)
{
    strength = newStrength;
}






void creature :: setHitPoints(const int& newHitPoints)
{
    hitPoints = newHitPoints;
}
    
    
    
    
    

    
void battleArena (creature& creature1, creature& creature2)
{
    
    bool battleOver = false;
    
    do {
        int newHealth1 = 0;
        int newHealth2 = 0;
        
        newHealth1 = creature1.getHitpoints() - creature2.getDamage();
        creature1.setHitPoints(newHealth1);
        
        cout << creature1.getSpecies() << " has "<< newHealth1 <<
        " health after being attacked by " << creature2.getSpecies() << endl;
        
        newHealth2 = creature2.getHitpoints() - creature1.getDamage();
        creature2.setHitPoints(newHealth2);
        
        cout << creature2.getSpecies() << " has "<< newHealth2 <<
        " health after being attacked by " << creature1.getSpecies() << '\n' << endl;
        
        if((newHealth1 <= 0) && (newHealth2 <= 0)) {
            // tie
            
            battleOver = true;
        }
        else if(newHealth1 <= 0) {
            // one died
            
            battleOver = true;
        }
        else if (newHealth2 <= 0){
            // two died
            
            battleOver = true;
        }
        
        //if the battle ends with both creatures health
        // <= 0, tie; else if one creature with >0 health and other
        // does not, battle is over.
            
    } while(!battleOver);
}
    
}
