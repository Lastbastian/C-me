/*
	Name: Chris Bastian
	Class: CS110B-META-FALL-2015
	Date: Sunday, Dec. 6th.
	Instructor: David Harden
	File Name: Demon.h
 */

#ifndef DEMON_H
#define DEMON_H
#include "Creature.h"
#include <iostream>

namespace cs_creature
{
    class demon : public creature
    {
    public:
        demon();
        demon(int newStrength, int newHitpoints);
        std::string getSpecies() const;
        int getDamage() const;
    };
}

#endif