#include "Cyberdemon.h"
#include <iostream>

using namespace std;

namespace cs_creature
{
    cyberdemon::cyberdemon()
    {
        setStrength(10);
        setHitpoints(10);
    }

    cyberdemon::cyberdemon(int newStrength, int newHitpoints)
    {
        setStrength(newStrength);
        setHitpoints(newHitpoints);
    }

    string cyberdemon::getSpecies() const
    { return "Cyberdemon"; }

//    int cyberdemon::getDamage() const
//    {
//        cout << "The " << getSpecies();
//        int damage = demon::getDamage();
//        
//        return damage;
//    }
}
