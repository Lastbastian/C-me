/*
	Name: Chris Bastian
	Class: CS110B-META-FALL-2015
	Date: Sunday, Dec. 6th.
	Instructor: David Harden
	File Name: Demon.cpp
 */

#include "Demon.h"
#include <iostream>

using namespace std;

namespace cs_creature
{

    demon::demon()
    {
        setStrength(10);
        setHitpoints(10);
    }

    demon::demon(int newStrength, int newHitpoints)
    {
        setStrength(newStrength);
        setHitpoints(newHitpoints);
    }

    string demon::getSpecies() const
    { return "Demon"; }

    int demon::getDamage() const
    {
        int damage = creature::getDamage();
        if (rand() % 4 == 0) {
            damage = damage + 50;
            cout << "Demonic attack inflicts 50 additional damage points!" << endl;
        }
        
        return damage;
    }
}
