#ifndef CREATURE_H
#define CREATURE_H
#include <iostream>

namespace cs_creature
{
    class creature
    {
        private:
            int strength;
            int hitpoints;
        
        public:
            // Constructors
            creature();
            creature(int newStrength, int newHitpoints);
        
            std::string getSpecies() const;
            int getDamage() const;
        
            // Accessors
            int getStrength() const;
            int getHitpoints() const;
        
            // Mutators
            void setStrength(int newStrength);
            void setHitpoints(int newHitpoints);
    };
}

#endif
