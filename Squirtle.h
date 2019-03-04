#ifndef SQUIRTLE_H
#define SQUIRTLE_H
#include "Pokemon.h"

class Squirtle: public Pokemon{
  public:
    Squirtle();
    // insert constructor here
      // hp = 44, sp. attack = 50
    void attack(Pokemon *poke);
};

#endif
