#include "Demon.h"
#include <iostream>

using namespace std;

namespace cs_creature
{

    demon::demon()
    {
        setStrength(10);
        setHitpoints(10);
    }

    demon::demon(int newStrength, int newHitpoints)
    {
        setStrength(newStrength);
        setHitpoints(newHitpoints);
    }

    string demon::getSpecies() const
    { return "Demon"; }

    int demon::getDamage() const
    {
        int damage = creature::getDamage();
        cout << " attacks for " << damage << " points!" << endl;
        if (rand() % 4 == 0) {
            damage = damage + 50;
            cout << "Demonic attack inflicts 50 additional damage points!" << endl;
        }
        
        return damage;
    }
}
