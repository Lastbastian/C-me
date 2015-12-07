/*
	Name: Chris Bastian
	Class: CS110B-META-FALL-2015
	Date: Sunday, Dec. 6th.
	Instructor: David Harden
	File Name: CreatureTest2.cpp
 */

#include "Creature.h"
#include "Human.h"
#include "Elf.h"
#include "Demon.h"
#include "Cyberdemon.h"
#include "Balrog.h"
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
using namespace cs_creature;

void battleArena(creature &creature1, creature& creature2)
{
    bool dead = false;
    int count = 0;
    
    cout << "\n***** BATTLE ARENA RESULTS *****\n" << endl;
    
    while (!dead)
    {
        count += 1;
        cout << creature1.getSpecies() << " attacks " << creature2.getSpecies() << endl;
        
        // creature 1 attack
        int damage = creature1.getDamage();
        cout  << "The " << creature1.getSpecies() << "'s total damage to the " << creature2.getSpecies() << " is " << damage << endl;
        creature2.setHitpoints(creature2.getHitpoints() - damage);
        
        //creature 2 attack
        int damage2 = creature2.getDamage();
        cout << "The " << creature2.getSpecies() << "'s total damage to the " << creature1.getSpecies() << " is " << damage2 << endl;
        creature1.setHitpoints(creature1.getHitpoints() - damage2);
        
        if (creature1.getHitpoints() <= 0){
            dead = true;
            cout << "The " << creature1.getSpecies() << " has died." << endl;
        }
        if (creature2.getHitpoints() <= 0){
            dead = true;
            cout << "The " << creature2.getSpecies() << " has died." << endl;
        }
        if (!dead)
        { cout << "Round " << count << " is a tie and the battle rages on!" << endl; }
    }
}

int main()
{
    elf bucky(50,100);
    balrog hell_fire(50,150);
    battleArena(bucky, hell_fire);
    
    elf whimsy(50,100);
    human steve(50,110);
    battleArena(whimsy, steve);
    
    cyberdemon terror(50, 140);
    human chuck(50, 104);
    battleArena(terror, chuck);
    
    balrog battle_beast(50, 139);
    cyberdemon noogie(50, 145);
    battleArena(battle_beast, noogie);
    
    return 0;
}


/*  OUTPUT
 
 ***** BATTLE ARENA RESULTS *****
 
 Elf attacks Balrog
 The Elf's total damage to the Balrog is 8
 The Balrog attacks for 24 points!
 Balrog speed attack inflicts 31 additional damage points!
 The Balrog's total damage to the Elf is 55
 Round 1 is a tie and the battle rages on!
 Elf attacks Balrog
 Magical attack inflicts 23 additional damage points!
 The Elf's total damage to the Balrog is 46
 The Balrog attacks for 29 points!
 Balrog speed attack inflicts 10 additional damage points!
 The Balrog's total damage to the Elf is 39
 Round 2 is a tie and the battle rages on!
 Elf attacks Balrog
 The Elf's total damage to the Balrog is 41
 The Balrog attacks for 43 points!
 Balrog speed attack inflicts 38 additional damage points!
 The Balrog's total damage to the Elf is 81
 The Elf has died.
 
 ***** BATTLE ARENA RESULTS *****
 
 Elf attacks Human
 The Elf's total damage to the Human is 4
 The Human attacks for 30 points!
 The Human's total damage to the Elf is 30
 Round 1 is a tie and the battle rages on!
 Elf attacks Human
 Magical attack inflicts 41 additional damage points!
 The Elf's total damage to the Human is 82
 The Human attacks for 4 points!
 The Human's total damage to the Elf is 4
 Round 2 is a tie and the battle rages on!
 Elf attacks Human
 The Elf's total damage to the Human is 20
 The Human attacks for 8 points!
 The Human's total damage to the Elf is 8
 Round 3 is a tie and the battle rages on!
 Elf attacks Human
 The Elf's total damage to the Human is 11
 The Human attacks for 50 points!
 The Human's total damage to the Elf is 50
 The Human has died.
 
 ***** BATTLE ARENA RESULTS *****
 
 Cyberdemon attacks Human
 The Cyberdemon attacks for 29 points!
 Demonic attack inflicts 50 additional damage points!
 The Cyberdemon's total damage to the Human is 79
 The Human attacks for 36 points!
 The Human's total damage to the Cyberdemon is 36
 Round 1 is a tie and the battle rages on!
 Cyberdemon attacks Human
 The Cyberdemon attacks for 48 points!
 The Cyberdemon's total damage to the Human is 48
 The Human attacks for 13 points!
 The Human's total damage to the Cyberdemon is 13
 The Human has died.
 
 ***** BATTLE ARENA RESULTS *****
 
 Balrog attacks Cyberdemon
 The Balrog attacks for 18 points!
 Balrog speed attack inflicts 34 additional damage points!
 The Balrog's total damage to the Cyberdemon is 52
 The Cyberdemon attacks for 30 points!
 The Cyberdemon's total damage to the Balrog is 30
 Round 1 is a tie and the battle rages on!
 Balrog attacks Cyberdemon
 The Balrog attacks for 30 points!
 Balrog speed attack inflicts 18 additional damage points!
 The Balrog's total damage to the Cyberdemon is 48
 The Cyberdemon attacks for 23 points!
 The Cyberdemon's total damage to the Balrog is 23
 Round 2 is a tie and the battle rages on!
 Balrog attacks Cyberdemon
 The Balrog attacks for 37 points!
 Balrog speed attack inflicts 46 additional damage points!
 The Balrog's total damage to the Cyberdemon is 83
 The Cyberdemon attacks for 29 points!
 The Cyberdemon's total damage to the Balrog is 29
 The Cyberdemon has died.
 Program ended with exit code: 0
*/