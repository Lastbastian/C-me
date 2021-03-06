/*
	Name: Chris Bastian
	Class: CS110B-META-FALL-2015
	Date: Sunday, Dec. 6th.
	Instructor: David Harden
	File Name: Creature.h
 */

#ifndef CREATURE_H
#define CREATURE_H
#include <iostream>

namespace cs_creature
{
    class creature
    {
        private:
            int strength;
            int hitpoints;
        
        public:
            // Constructors
            creature();
            creature(int newStrength, int newHitpoints);
        
            virtual std::string getSpecies() const = 0;     // pure virtual function
            virtual int getDamage() const;
        
            // Accessors
            int getStrength() const;
            int getHitpoints() const;
        
            // Mutators
            void setStrength(int newStrength);
            void setHitpoints(int newHitpoints);
    };
}

#endif
