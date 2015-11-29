#ifndef CREATURE_H
#define CREATURE_H
#include <iostream>

using namespace std;

class creature {
protected:
    int type;                       // 0 human, 1 cyberdemon, 2 balrog, 3 elf
    int strength;                   // how much damage this creature inflicts
    int hitpoints;                  // how much damage this creature can sustain
    string getSpecies() const;      // returns the type of the species
public:                             // initialize to human, 10 strength, 10 hitpoints
    creature();
    creature(int newType, int newStrength, int newHitpoints);
    int getDamage() const;          // returns the amount of damage this Creature
                                    // inflicts in one round of combat
    
    // also include appropriate accessors and mutators
};

class human : public creature {
    human() : creature()
    { type = 0; }
    human(newType) : creature(newStrength, newHitpoints)
    { type = newType}



};

class elf : public creature {


};

class demon : public creature {

};


class cyberdemon : public demon {


};

class balrog : public demon {

};


#endif
