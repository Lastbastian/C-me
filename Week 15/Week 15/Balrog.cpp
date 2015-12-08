/*
	Name: Chris Bastian
	Class: CS110B-META-FALL-2015
	Date: Sunday, Dec. 6th.
	Instructor: David Harden
	File Name: Balrog.cpp
 */

#include "Balrog.h"
#include <iostream>

using namespace std;

namespace cs_creature
{
    balrog::balrog()
    {
        setStrength(10);
        setHitpoints(10);
    }

    balrog::balrog(int newStrength, int newHitpoints)
    {
        setStrength(newStrength);
        setHitpoints(newHitpoints);
    }

    string balrog::getSpecies() const
    { return "Balrog"; }

    int balrog::getDamage() const
    {
        cout << "The " << getSpecies();
        int damage = demon::getDamage();
        int damage2 = (rand() % getStrength()) + 1;
        
        cout << "Balrog speed attack inflicts " << damage2 << " additional damage points!" << endl;
        damage += damage2;
        
        return damage;
    }
}
