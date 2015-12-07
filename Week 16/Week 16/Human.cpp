#include "Human.h"
#include <iostream>

using namespace std;

namespace cs_creature
{
    human::human() : creature()
    {
        setStrength(10);
        setHitpoints(10);
    }

    human::human(int newStrength, int newHitpoints)
    {
        setStrength(newStrength);
        setHitpoints(newHitpoints);
    }

    string human::getSpecies() const
    { return "Human"; }

    int human::getDamage() const
    {
        int damage = creature::getDamage();
//        cout << "The " << getSpecies() << " attacks for " << damage << " points!" << endl;
        
        return damage;
    }
}