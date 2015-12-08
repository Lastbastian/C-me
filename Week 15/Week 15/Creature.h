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
        
            std::string getSpecies() const;
            int getDamage() const;
        
            // Accessors
            int getStrength() const;
            int getHitpoints() const;
        
            // Mutators
            void setStrength(int newStrength);
            void setHitpoints(int newHitpoints);
    };
}

#endif

/*  OUTPUT
 
 default human strength/hitpoints: 10/10
 default elf strength/hitpoints: 10/10
 default cyberdemon strength/hitpoints: 10/10
 default balrog strength/hitpoints: 10/10
 non-default human strength/hitpoints: 20/30
 non-default elf strength/hitpoints: 40/50
 non-default cyberdemon strength/hitpoints: 60/70
 non-default balrog strength/hitpoints: 80/90
 
 
 Examples of Human damage:
 The Human attacks for 20 points!
 Total damage = 20
 
 The Human attacks for 5 points!
 Total damage = 5
 
 The Human attacks for 1 points!
 Total damage = 1
 
 The Human attacks for 4 points!
 Total damage = 4
 
 The Human attacks for 10 points!
 Total damage = 10
 
 The Human attacks for 7 points!
 Total damage = 7
 
 The Human attacks for 17 points!
 Total damage = 17
 
 The Human attacks for 13 points!
 Total damage = 13
 
 The Human attacks for 16 points!
 Total damage = 16
 
 The Human attacks for 7 points!
 Total damage = 7
 
 
 Examples of Elf damage:
 The Elf attacks for 4 points!
 Magical attack inflicts 4 additional damage points!
 Total damage = 8
 
 The Elf attacks for 12 points!
 Magical attack inflicts 12 additional damage points!
 Total damage = 24
 
 The Elf attacks for 31 points!
 Magical attack inflicts 31 additional damage points!
 Total damage = 62
 
 The Elf attacks for 26 points!
 Total damage = 26
 
 The Elf attacks for 39 points!
 Magical attack inflicts 39 additional damage points!
 Total damage = 78
 
 The Elf attacks for 35 points!
 Magical attack inflicts 35 additional damage points!
 Total damage = 70
 
 The Elf attacks for 25 points!
 Total damage = 25
 
 The Elf attacks for 30 points!
 Magical attack inflicts 30 additional damage points!
 Total damage = 60
 
 The Elf attacks for 24 points!
 Magical attack inflicts 24 additional damage points!
 Total damage = 48
 
 The Elf attacks for 33 points!
 Total damage = 33
 
 
 Examples of Cyberdemon damage:
 The Cyberdemon attacks for 8 points!
 Total damage = 8
 
 The Cyberdemon attacks for 31 points!
 Total damage = 31
 
 The Cyberdemon attacks for 13 points!
 Total damage = 13
 
 The Cyberdemon attacks for 1 points!
 Total damage = 1
 
 The Cyberdemon attacks for 51 points!
 Total damage = 51
 
 The Cyberdemon attacks for 44 points!
 Total damage = 44
 
 The Cyberdemon attacks for 6 points!
 Total damage = 6
 
 The Cyberdemon attacks for 36 points!
 Demonic attack inflicts 50 additional damage points!
 Total damage = 86
 
 The Cyberdemon attacks for 16 points!
 Total damage = 16
 
 The Cyberdemon attacks for 4 points!
 Demonic attack inflicts 50 additional damage points!
 Total damage = 54
 
 
 Examples of Balrog damage:
 The Balrog attacks for 8 points!
 Balrog speed attack inflicts 34 additional damage points!
 Total damage = 42
 
 The Balrog attacks for 54 points!
 Balrog speed attack inflicts 8 additional damage points!
 Total damage = 62
 
 The Balrog attacks for 52 points!
 Demonic attack inflicts 50 additional damage points!
 Balrog speed attack inflicts 75 additional damage points!
 Total damage = 177
 
 The Balrog attacks for 31 points!
 Balrog speed attack inflicts 38 additional damage points!
 Total damage = 69
 
 The Balrog attacks for 3 points!
 Demonic attack inflicts 50 additional damage points!
 Balrog speed attack inflicts 26 additional damage points!
 Total damage = 79
 
 The Balrog attacks for 10 points!
 Demonic attack inflicts 50 additional damage points!
 Balrog speed attack inflicts 20 additional damage points!
 Total damage = 80
 
 The Balrog attacks for 49 points!
 Balrog speed attack inflicts 23 additional damage points!
 Total damage = 72
 
 The Balrog attacks for 55 points!
 Demonic attack inflicts 50 additional damage points!
 Balrog speed attack inflicts 39 additional damage points!
 Total damage = 144
 
 The Balrog attacks for 19 points!
 Balrog speed attack inflicts 34 additional damage points!
 Total damage = 53
 
 The Balrog attacks for 15 points!
 Demonic attack inflicts 50 additional damage points!
 Balrog speed attack inflicts 71 additional damage points!
 Total damage = 136
 
 
 Program ended with exit code: 0
 */