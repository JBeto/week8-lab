#include "Charmander.h"

Charmander::Charmander() : Pokemon(Fire, "Charmander", 39, 60) {}

void Charmander::attack(Pokemon *poke){
   /*
    The attack functions does 3/5 times the sp_attack of damage to the 
    "poke" pointer. If the attack is super effective double the damage output. 
    critical hit ratio is 1/8
    if there is a critical, output it
   */
  int damage = 0;
  damage += ((3/5) * sp_attack);
  
  if((rand()%8) == 4){
     cout << "Critical hit!" << endl;
     damage *= 2;
  }
  
  if (type == Grass) {
     damage *= 2;
  }
  else {
     damage /= 2;
  }

  poke->damage(damage);
}



