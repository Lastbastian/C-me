#include "Elf.h"
#include <iostream>

using namespace std;

namespace cs_creature
{
    elf::elf()
    {
        setStrength(10);
        setHitpoints(10);
    }

    elf::elf(int newStrength, int newHitpoints)
    {
        setStrength(newStrength);
        setHitpoints(newHitpoints);
    }

    string elf::getSpecies() const
    { return "Elf"; }

    int elf::getDamage() const
    {
        int damage = (rand() % getStrength()) + 1;
        if ((rand() % 2) == 0) {
            cout << "Magical attack inflicts " << damage << " additional damage points!" << endl;
            damage *= 2;
        }
        
        return damage;
    }
}