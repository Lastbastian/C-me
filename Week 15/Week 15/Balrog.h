/*
	Name: Chris Bastian
	Class: CS110B-META-FALL-2015
	Date: Sunday, Dec. 6th.
	Instructor: David Harden
	File Name: Balrog.h
 */

#ifndef BALROG_H
#define BALROG_H
#include "Demon.h"
#include <iostream>

namespace cs_creature
{
    class balrog : public demon
    {
    public:
        balrog();
        balrog(int newStrength, int newHitpoints);
        std::string getSpecies() const;
        int getDamage() const;
    };
}

#endif