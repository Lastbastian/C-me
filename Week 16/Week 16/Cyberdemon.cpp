/*
	Name: Chris Bastian
	Class: CS110B-META-FALL-2015
	Date: Sunday, Dec. 6th.
	Instructor: David Harden
	File Name: Cyberdemon.cpp
 */

#include "Cyberdemon.h"
#include <iostream>

using namespace std;

namespace cs_creature
{
    cyberdemon::cyberdemon()
    {
        setStrength(10);
        setHitpoints(10);
    }

    cyberdemon::cyberdemon(int newStrength, int newHitpoints)
    {
        setStrength(newStrength);
        setHitpoints(newHitpoints);
    }

    string cyberdemon::getSpecies() const
    { return "Cyberdemon"; }
}
