/*
	Name: Chris Bastian
	Class: CS110B-META-FALL-2015
	Date: Sunday, Dec. 6th.
	Instructor: David Harden
	File Name: Creature.cpp
 */

#include "Creature.h"
#include <iostream>

using namespace std;

namespace cs_creature
{

    // Creature class functions
    creature::creature()
    {
        strength = 10;
        hitpoints = 10;
    }

    creature::creature(int newStrength, int newHitpoints)
    {
        strength = newStrength;
        hitpoints = newHitpoints;
    }

    int creature::getStrength() const
    { return strength; }

    int creature::getHitpoints() const
    { return hitpoints; }

    void creature::setStrength(int newStrength)
    { strength = newStrength; }

    void creature::setHitpoints(int newHitpoints)
    { hitpoints = newHitpoints; }

    int creature::getDamage() const
    {
        int damage = (rand() % strength) + 1;
        cout << "The " << getSpecies() << " attacks for " << damage << " points!" << endl;
        
        return damage;
    }
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