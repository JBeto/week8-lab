#include "Bulbasaur.h"
#include <cstdlib>

using namespace std;

Bulbasaur::Bulbasaur()
: Pokemon(Grass, "Bulbasaur", 45, 61);

void Bulbasaur::attack(Pokemon *poke){
   /*
    The attack functions does 2/5 times the sp_attack of damage to the 
    "poke" pointer. If the attack is super effective double the damage output. 
    critical hit ratio is 1/4
    if there is a critical, output it
   */
    
    int criticalHit = rand() % 4;
    
    if(criticalHit == 0)
    {
        poke->damage(sp_attack * 2);
        cout << "Critical hit!" << endl;
    }
    else if(poke->type == Water)
    {
        poke->damage(sp_attack * 2);
    }
    else if(criticalHit == 0 && poke->type == Water)
    {
        poke->damage(sp_attack * 4);
    }
    else
    {
        poke->damage((2/5) * sp_attack);
    }
}

