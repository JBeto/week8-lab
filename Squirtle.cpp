#include "Squirtle.h"

Squirtle::Squirtle() : Pokemon(Water, "Squirtle", 44, 50) {};

void Squirtle::attack(Pokemon *poke) {
   /*
    The attack functions does 4/5 times the sp_attack of damage to the 
    "poke" pointer. If the attack is super effective double the damage output. 
     Critical hit ratio is 1/16
     if there is a critical, output it
   */
  int damage =((4/5)*sp_attack);

  if (poke->getType() == Fire) { //super effective
      damage *= 2;
  }
  else {
     damage /= 2;
  }

  if((rand() % 16) == 8){
     damage *= 2;
     cout << "Critical Hit!!" << endl;
  }

  poke->damage(damage);
}


