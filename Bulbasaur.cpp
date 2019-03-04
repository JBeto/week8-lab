#include "Bulbasaur.h"
#include <cstdlib>

using namespace std;

Bulbasaur::Bulbasaur() : Pokemon(Grass, "Bulbasaur", 45, 61) {}

void Bulbasaur::attack(Pokemon *poke){
   /*
    The attack functions does 2/5 times the sp_attack of damage to the 
    "poke" pointer. If the attack is super effective double the damage output. 
    critical hit ratio is 1/4
    if there is a critical, output it
   */
  int damage = ((2/5) * sp_attack);
  if((rand()%4) == 3) {
     cout << "Critical hit!" << endl;
     damage *= 2;
  }
  if (poke->getType() == Water) {
     damage *= 2;
  }
  else {
     damage /= 2;
  }
  poke->damage(damage);
}

