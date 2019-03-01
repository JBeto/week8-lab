#ifndef BULBASAUR_H
#define BULBASAUR_H
#include "Pokemon.h"

using namespace std;

class Bulbasaur: public Pokemon{
  public:
    //insert constructor here
      // hp = 45, sp. attack = 61
    Bulbasaur();
    void attack(Pokemon *poke);
};

#endif
