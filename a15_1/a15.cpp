/*
 
 Stacey Rivet Beck 5/8/17
 110B, a_15
 client program
 
 */
#include "demon.h"
#include "creature.h"
#include "human.h"
#include "elf.h"
#include "cyberdemon.h"
#include "balrog.h"
#include <iostream>
#include <ctime>
#include <string>
#include <cstdlib>
using namespace std;
using namespace cs_creature; 

int main() {
    srand(time(0));
    
    human h1;
    elf e1;
    cyberdemon c1;
    balrog b1;
    
    human h(20, 30);
    elf e(40, 50);
    cyberdemon c(60, 70);
    balrog b(80, 90);
    
    battleArena(e, b);
    battleArena(c, b);
    battleArena(h, e);
    battleArena(c, h);
    
    
    cout << "default human strength/hitpoints: " << h1.getStrength() << "/" << h1.getHitpoints() << endl;
    cout << "default elf strength/hitpoints: " << e1.getStrength() << "/" << e1.getHitpoints() << endl;
    cout << "default cyberdemon strength/hitpoints: " << c1.getStrength() << "/" << c1.getHitpoints() << endl;
    cout << "default balrog strength/hitpoints: " << b1.getStrength() << "/" << b1.getHitpoints() << endl;
    cout << "non-default human strength/hitpoints: " << h.getStrength() << "/" << h.getHitpoints() << endl;
    cout << "non-default elf strength/hitpoints: " << e.getStrength() << "/" << e.getHitpoints() << endl;
    cout << "non-default cyberdemon strength/hitpoints: " << c.getStrength() << "/" << c.getHitpoints() << endl;
    cout << "non-default balrog strength/hitpoints: " << b.getStrength() << "/" << b.getHitpoints() << endl;
    cout << endl << endl;
    
    cout << "Examples of " << h.getSpecies() << " damage: " << endl;
    for (int i = 0; i < 10; i++){
        int damage = h.getDamage();
        cout << " Total damage = " << damage << endl;
        cout << endl;
    }
    cout << endl;
    
    
    
    cout << "Examples of " << e.getSpecies() << " damage: " << endl;
    for (int i = 0; i < 10; i++){
        int damage = e.getDamage();
        cout << " Total damage = " << damage << endl;
        cout << endl;
    }
    cout << endl;
    
    
 
    cout << "Examples of " << c.getSpecies() << " damage: " << endl;
    for (int i = 0; i < 10; i++){
        int damage = c.getDamage();
        cout << " Total damage = " << damage << endl;
        cout << endl;
    }
    cout << endl;
    
    
    
    cout << "Examples of " << b.getSpecies() << " damage: " << endl;
    for (int i = 0; i < 10; i++){
        int damage = b.getDamage();
        cout << " Total damage = " << damage << endl;
        cout << endl;
    }
    cout << endl;
}


/*
 
 The balrog attacks for 33 points!
 Demonic attack inflicts 50 additional damage points!
 Balrog speed attack inflicts 42 additional damage points!
 elf has -75 health after being attacked by balrog
 The elf attacks for 37 points!
 Magical attack inflicts 37 additional damage points!
 balrog has 16 health after being attacked by elf
 
 The balrog attacks for 22 points!
 Balrog speed attack inflicts 5 additional damage points!
 cyberdemon has 43 health after being attacked by balrog
 The cyberdemon attacks for 1 points!
 balrog has 15 health after being attacked by cyberdemon
 
 The balrog attacks for 52 points!
 Balrog speed attack inflicts 36 additional damage points!
 cyberdemon has -45 health after being attacked by balrog
 The cyberdemon attacks for 28 points!
 balrog has -13 health after being attacked by cyberdemon
 
 The elf attacks for 29 points!
 Magical attack inflicts 29 additional damage points!
 human has -28 health after being attacked by elf
 The human attacks for 7 points!
 elf has -82 health after being attacked by human
 
 The human attacks for 13 points!
 cyberdemon has -58 health after being attacked by human
 The cyberdemon attacks for 7 points!
 human has -35 health after being attacked by cyberdemon
 
 default human strength/hitpoints: 10/10
 default elf strength/hitpoints: 10/10
 default cyberdemon strength/hitpoints: 10/10
 default balrog strength/hitpoints: 10/10
 non-default human strength/hitpoints: 20/-35
 non-default elf strength/hitpoints: 40/-82
 non-default cyberdemon strength/hitpoints: 60/-58
 non-default balrog strength/hitpoints: 80/-13
 
 
 Examples of human damage:
 The human attacks for 9 points!
 Total damage = 9
 
 The human attacks for 16 points!
 Total damage = 16
 
 The human attacks for 13 points!
 Total damage = 13
 
 The human attacks for 18 points!
 Total damage = 18
 
 The human attacks for 11 points!
 Total damage = 11
 
 The human attacks for 9 points!
 Total damage = 9
 
 The human attacks for 9 points!
 Total damage = 9
 
 The human attacks for 18 points!
 Total damage = 18
 
 The human attacks for 15 points!
 Total damage = 15
 
 The human attacks for 13 points!
 Total damage = 13
 
 
 Examples of elf damage:
 The elf attacks for 36 points!
 Total damage = 36
 
 The elf attacks for 28 points!
 Total damage = 28
 
 The elf attacks for 36 points!
 Total damage = 36
 
 The elf attacks for 20 points!
 Magical attack inflicts 20 additional damage points!
 Total damage = 40
 
 The elf attacks for 34 points!
 Total damage = 34
 
 The elf attacks for 38 points!
 Magical attack inflicts 38 additional damage points!
 Total damage = 76
 
 The elf attacks for 9 points!
 Magical attack inflicts 9 additional damage points!
 Total damage = 18
 
 The elf attacks for 39 points!
 Magical attack inflicts 39 additional damage points!
 Total damage = 78
 
 The elf attacks for 17 points!
 Total damage = 17
 
 The elf attacks for 23 points!
 Total damage = 23
 
 
 Examples of cyberdemon damage:
 The cyberdemon attacks for 10 points!
 Total damage = 10
 
 The cyberdemon attacks for 54 points!
 Total damage = 54
 
 The cyberdemon attacks for 48 points!
 Total damage = 48
 
 The cyberdemon attacks for 24 points!
 Total damage = 24
 
 The cyberdemon attacks for 36 points!
 Total damage = 36
 
 The cyberdemon attacks for 29 points!
 Total damage = 29
 
 The cyberdemon attacks for 34 points!
 Total damage = 34
 
 The cyberdemon attacks for 60 points!
 Demonic attack inflicts 50 additional damage points!
 Total damage = 110
 
 The cyberdemon attacks for 55 points!
 Total damage = 55
 
 The cyberdemon attacks for 35 points!
 Total damage = 35
 
 
 Examples of balrog damage:
 The balrog attacks for 33 points!
 Balrog speed attack inflicts 5 additional damage points!
 Total damage = 38
 
 The balrog attacks for 33 points!
 Demonic attack inflicts 50 additional damage points!
 Balrog speed attack inflicts 68 additional damage points!
 Total damage = 151
 
 The balrog attacks for 14 points!
 Balrog speed attack inflicts 14 additional damage points!
 Total damage = 28
 
 The balrog attacks for 44 points!
 Demonic attack inflicts 50 additional damage points!
 Balrog speed attack inflicts 18 additional damage points!
 Total damage = 112
 
 The balrog attacks for 68 points!
 Balrog speed attack inflicts 18 additional damage points!
 Total damage = 86
 
 The balrog attacks for 63 points!
 Demonic attack inflicts 50 additional damage points!
 Balrog speed attack inflicts 67 additional damage points!
 Total damage = 180
 
 The balrog attacks for 30 points!
 Demonic attack inflicts 50 additional damage points!
 Balrog speed attack inflicts 29 additional damage points!
 Total damage = 109
 
 The balrog attacks for 12 points!
 Demonic attack inflicts 50 additional damage points!
 Balrog speed attack inflicts 16 additional damage points!
 Total damage = 78
 
 The balrog attacks for 41 points!
 Demonic attack inflicts 50 additional damage points!
 Balrog speed attack inflicts 83 additional damage points!
 Total damage = 174
 
 The balrog attacks for 28 points!
 Balrog speed attack inflicts 2 additional damage points!
 Total damage = 30
 
 
 Program ended with exit code: 0
 
 */
