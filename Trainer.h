#ifndef TRAINER_H
#define TRAINER_H

#include "Pokemon.h"
#include <vector>


class Trainer{
  private:
    const string name;
    vector<Pokemon *> list;
    
  public:
    Trainer(const string name): name(name) {}
    bool outOfPokemon();
    void addPokemon(Pokemon * p);
    string getName();
    void viewTeam();
    void losePokemon(int index);
    void attackPlayer(Trainer * opponent, int index, int enemyIndex);

};

#endif
