#ifndef DEMON_H
#define DEMON_H
#include "Creature.h"
#include <iostream>

class demon : public creature
{
protected:
    int type;
    
public:
    demon() : creature                                          // constructor
    { type = 0; }
    human(int newType, int newStrength, int newHitpoints) : creature(newStrength, newHitpoints)
    { type = 0; }
    
    int getType() const
    { return type; }
};
