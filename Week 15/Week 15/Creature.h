#ifndef CREATURE_H
#define CREATURE_H
#include <iostream>

using namespace std;

class creature
{
    private:
        int type;                       // 0 human, 1 cyberdemon, 2 balrog, 3 elf
        int strength;                   // how much damage this creature inflicts
        int hitpoints;                  // how much damage this creature can sustain
        string getSpecies() const;      // returns the type of the species
    public:                             // initialize to human, 10 strength, 10 hitpoints
        creature();
        creature(int newStrength, int newHitpoints);
        int getDamage() const;          // returns the amount of damage this Creature
                                        // inflicts in one round of combat
        // Accessors
        int getStrength() const;
        int getHitPoints() const;
    
        // Mutators
        void setStrength(int newStrength);
        void setHitPoints(int newHitpoints);
};

class human : public creature {
    public:
        human() : creature();
        human(int newType, int newStrength, intHitpoints) : creature(strength, hitpoints);
        string getSpecies() const;
};

class elf : public creature {
    public:
        elf() : creature();
        elf(int newType, int newStrength, int newHitpoints) : creature(strength, hitpoints);
        string getSpecies() const;
};

class demon : public creature {
    public:
        demon() : creature();
        demon(int newType, int newStrength, int newHitpoints) : creature(strength, hitpoints)
        string getSpecies() const;
};


class cyberdemon : public demon {
    public:
        cyberdemon() : demon()
        cyberdemon(int newType, int newStrength, int newHitpoints) : creature(strength, hitpoints)
        string getSpecies() const
};

class balrog : public demon {
    public:
        balrog() : demon()
        balrog(int newType, int newStrength, int newHitpoints) : creature(strength, hitpoints)
        string getSpecies() const
};


#endif
