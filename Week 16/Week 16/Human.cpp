/*
	Name: Chris Bastian
	Class: CS110B-META-FALL-2015
	Date: Sunday, Dec. 6th.
	Instructor: David Harden
	File Name: Human.cpp
 */

#include "Human.h"
#include <iostream>

using namespace std;

namespace cs_creature
{
    human::human() : creature()
    {
        setStrength(10);
        setHitpoints(10);
    }

    human::human(int newStrength, int newHitpoints)
    {
        setStrength(newStrength);
        setHitpoints(newHitpoints);
    }

    string human::getSpecies() const
    { return "Human"; }
}