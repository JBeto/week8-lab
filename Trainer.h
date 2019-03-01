#include "Pokemon.h"
#include <vector>
#ifndef __TRAINER_H__
#define __TRAINER_H__

class Trainer{
  private:
    const string name;
    vector<Pokemon *> list;
    int size;
    
  public:
    Trainer(const string name): name(name), size(0){}
    bool outOfPokemon();
    void addPokemon(Pokemon * p);
    string getName();
    void viewTeam();
    void losePokemon(int index);
    void attackPlayer(Trainer * opponent, int index, int enemyIndex);

};

#endif
