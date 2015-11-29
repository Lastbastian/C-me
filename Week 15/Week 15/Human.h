#ifndef HUMAN_H
#define HUMAN_H
#include "Creature.h"
#include <iostream>


class human : public creature
{
private:
    int type;
    
public:
    human() : creature                                          // constructor
    { type = 0; }
    human(int newType, int newStrength, int newHitpoints) : creature(newStrength, newHitpoints)
    { type = 0; }
    
    int getType() const
    { return type; }
    
};

#endif
