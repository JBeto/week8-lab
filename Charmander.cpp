#include "Charmander.h"

Charmander::Charmander(){
      health = 39; 
      sp_attack = 60;
      type = Fire;
}

void Charmander::attack(Pokemon *poke){
   /*
    The attack functions does 3/5 times the sp_attack of damage to the 
    "poke" pointer. If the attack is super effective double the damage output. 
    critical hit ratio is 1/8
    if there is a critical, output it
   */
  int damage = 0;
  if((rand()%8) == 4){
     cout << "Critical hit!" << endl;
     damage += (2 * ((3/5) * sp_attack));
  }
  else{
     damage += ((3/5) * sp_attack);
  }
  if(type == Grass) {
     damage += (2 * ((3/5) * sp_attack));
  }

  health -= damage;
}



