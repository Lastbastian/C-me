#ifndef CYBERDEMON_H
#define CYBERDEMON_H
#include "Demon.h"
#include <iostream>

namespace cs_creature
{
    class cyberdemon : public demon
    {
    public:
        cyberdemon();
        cyberdemon(int newStrength, int newHitpoints);
        std::string getSpecies() const;
//        int getDamage() const;
    };
}

#endif