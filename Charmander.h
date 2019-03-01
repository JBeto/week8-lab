#ifndef CHARMANDER_H
#define CHARMANDER_H
#include "Pokemon.h"

class Charmander: public Pokemon{
  public:
    // insert constructr here
      // hp = 39, sp. attack = 60
    Charmander();
    void attack(Pokemon *poke);
};

#endif
