/*
	Name: Chris Bastian
	Class: CS110B-META-FALL-2015
	Date: Sunday, Dec. 6th.
	Instructor: David Harden
	File Name: Elf.h
 */

#ifndef ELF_H
#define ELF_H
#include "Creature.h"
#include <iostream>

namespace cs_creature
{
    class elf : public creature
    {
    public:
        elf();
        elf(int newStrength, int newHitpoints);
        std::string getSpecies() const;
        int getDamage() const;
    };
}

#endif
