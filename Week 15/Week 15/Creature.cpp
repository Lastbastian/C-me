#include "Creature.h"

// Creature class functions
creature::creature()                  // default constructor
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

int creature::getHitPoints() const
{ return hitpoints; }

void creature::setStrength(int newStrength)
{ strength = newStrength; }

void creature::setHitPoints(int newHitpoints)
{ hitpoints = newHitpoints; }

int creature::getDamage() const
{
    int damage;
    
    damage = (rand() % strength) + 1;
    cout << getSpecies() << " attacks for " << damage << " points!" << endl;
    
    if (type == 2 || type == 1){
        if (rand() % 4 == 0) {
            damage = damage + 50;
            cout << "Demonic attack inflicts 50 additional damage points!" << endl;
        }
    }
    
    if (type == 3) {
        if ((rand() % 2) == 0) {
            cout << "Magical attack inflicts " << damage << " additional damage points!" << endl;
            damage *= 2;
        }
    }
    
    if (type == 2) {
        int damage2 = (rand() % strength) + 1;
        cout << "Balrog speed attack inflicts " << damage2 << " additional damage points!" << endl;
        damage += damage2;
    }
    
    return damage;
}

string getSpecies() const
{   return "Creature"; }

//human class functions
human::human() : creature()
{   }

human::human(int newType, int newStrength, int newHitpoints) : creature(strength, hitpoints)
{
    type = newType;
    
}
string human::getSpecies() const
    { return "Human"; }

//elf class functions
elf::elf() : creature()
{}

elf::elf(int newType, int newStrength, int newHitpoints) : creature(strength, hitpoints)
{}
string elf::getSpecies() const
    { return "Elf"; }

//demon class functions
string demon::getSpecies() const
    { return "Demon"; }



