#include "Creature.h"
#include <iostream>

using namespace std;

namespace cs_creature
{

    // Creature class functions
    creature::creature()
    {
        strength = 10;
        hitpoints = 10;
    }

    creature::creature(int newStrength, int newHitpoints)
    {
        strength = newStrength;
        hitpoints = newHitpoints;
    }

    int creature::getStrength() const
    { return strength; }

    int creature::getHitpoints() const
    { return hitpoints; }

    void creature::setStrength(int newStrength)
    { strength = newStrength; }

    void creature::setHitpoints(int newHitpoints)
    { hitpoints = newHitpoints; }

    int creature::getDamage() const
    {
        int damage = (rand() % strength) + 1;
        cout << "The " << getSpecies() << " attacks for " << damage << " points!" << endl;
        
        return damage;
    }

    string getSpecies()
        { return "Creature"; }
}