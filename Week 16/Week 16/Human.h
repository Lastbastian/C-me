/*
	Name: Chris Bastian
	Class: CS110B-META-FALL-2015
	Date: Sunday, Dec. 6th.
	Instructor: David Harden
	File Name: Human.h
 */

#ifndef HUMAN_H
#define HUMAN_H
#include "Creature.h"

using namespace std;

namespace cs_creature
{
    class human : public creature
    {
    public:
        human();
        human(int newStrength, int newHitpoints);
        std::string getSpecies() const;
    };
}

#endif