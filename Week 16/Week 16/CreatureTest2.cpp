#include "Creature.h"
#include "Human.h"
#include "Elf.h"
#include "Demon.h"
#include "Cyberdemon.h"
#include "Balrog.h"
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
using namespace cs_creature;

/*
 Make a function in your client program that is called from your main function, battleArena(creature &creature1, creature& creature2), that takes two creature objects as parameters. The function should calculate the damage done by creature1, subtract that amount from creature2's hitpoints, and vice versa. If both creatures end up with 0 or fewer hitpoints, then the battle results in a tie. Otherwise, at the end of a round, if one creature has positive hitpoints but the other does not, the battle is over. The function should loop until either a tie or over. Since the getDamage() function is virtual it should invoke the getDamage() function defined for the appropriate creature. Test your program with several battles involving different creatures. I've provided a sample main function below. Your only remaining task is to write the "battleArena" function and expand the main function so that the "battleArena" function is tested with a variety of different creatures.
 */

void battleArena(creature &creature1, creature& creature2)
{
    bool dead = false;
    int count = 0;
    
    cout << "\n***** BATTLE ARENA RESULTS *****\n" << endl;
    
    while (!dead)
    {
        count += 1;
        cout << creature1.getSpecies() << " attacks " << creature2.getSpecies() << endl;
        
        // creature 1 attack
        int damage = creature1.getDamage();
        cout  << "The " << creature1.getSpecies() << "'s total damage to the " << creature2.getSpecies() << " is " << damage << endl;
        creature2.setHitpoints(creature2.getHitpoints() - damage);
        
        //creature 2 attack
        int damage2 = creature2.getDamage();
        cout << "The " << creature2.getSpecies() << "'s total damage to the " << creature1.getSpecies() << " is " << damage2 << endl;
        creature1.setHitpoints(creature1.getHitpoints() - damage2);
        
        if (creature1.getHitpoints() <= 0){
            dead = true;
            cout << "The " << creature1.getSpecies() << " has died." << endl;
        }
        if (creature2.getHitpoints() <= 0){
            dead = true;
            cout << "The " << creature2.getSpecies() << " has died." << endl;
        }
        if (!dead)
        { cout << "Round " << count << " is a tie and the battle rages on!" << endl; }
    }
}

int main()
{
    elf bucky(50,100);
    balrog hell_fire(50,150);
    battleArena(bucky, hell_fire);
    
    elf whimsy(50,100);
    human steve(50,110);
    battleArena(whimsy, steve);
    
    cyberdemon terror(50, 140);
    human chuck(50, 104);
    battleArena(terror, chuck);
    
    balrog battle_beast(50, 139);
    cyberdemon noogie(50, 145);
    battleArena(battle_beast, noogie);
    
    return 0;
}