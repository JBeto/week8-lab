#include "Squirtle.h"

void Squirtle::Squirtle(){
   hp = 44;
   sp_attack = 50;
   type = Water;
}

void Squirtle:: attack(Pokemon *poke){
   /*
    The attack functions does 4/5 times the sp_attack of damage to the 
    "poke" pointer. If the attack is super effective double the damage output. 
     Critical hit ratio is 1/16
     if there is a critical, output it
   */
  int damage = 0;
  damage +=((4/5)*sp_attack);

  if(poke->type == Fire){ //super effective
      damage *= 2;
  }

  if((rand() % 16) == 8){
     damage *= 2;
     cout << "Critical Hit!!" << endl;
  }

  poke->hp -= damage;
}


