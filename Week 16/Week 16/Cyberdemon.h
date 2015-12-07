/*
	Name: Chris Bastian
	Class: CS110B-META-FALL-2015
	Date: Sunday, Dec. 6th.
	Instructor: David Harden
	File Name: Cyberdemon.h
 */

#ifndef CYBERDEMON_H
#define CYBERDEMON_H
#include "Demon.h"
#include <iostream>

namespace cs_creature
{
    class cyberdemon : public demon
    {
    public:
        cyberdemon();
        cyberdemon(int newStrength, int newHitpoints);
        std::string getSpecies() const;
    };
}

#endif