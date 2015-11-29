#ifndef Week_15_creature_h
#define Week_15_creature_h

class creature {
private:
    int type;               // 0 human, 1 cyberdemon, 2 balrog, 3 elf
    int strength;           // how much damage this creature inflicts
    int hitpoints;          // how much damage this creature can sustain
    string getSpecies() const;    // returns the type of the species
public:
    creature();             // initialize to human, 10 strength, 10 hitpoints
    creature(int newType, int newStrength, int newHitpoints);
    int getDamage() const;         // returns the amount of damage this Creature
    // inflicts in one round of combat
    
    // also include appropriate accessors and mutators
};


#endif
