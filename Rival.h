#ifndef RIVAL_H
#define RIVAL_H

#include "Trainer.h"
#include <vector>


class Rival : public Trainer {
  public:
    // add a constructor here that allows you to fill the name!

    // this function allows the rival to attack twice in a row on the same target with the same pokemon
    void attackPlayer(Trainer* player, int index, int enemyIndex);

};

#endif
