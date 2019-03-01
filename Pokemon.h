#ifndef POKEMON_H
#define POKEMON_H
#include <iostream>
using namespace std;

enum TYPE{Water, Fire, Grass};

class Pokemon{
  protected:
    const string name;
    int health;
    int sp_attack;
    TYPE type;
    
  public:
    Pokemon();
    Pokemon(TYPE t,string name, int health, int sp_attack);
    string getName();
    TYPE getType();
    void damage(int);
    virtual void attack(Pokemon *poke) = 0;
    int getHealth();
};

#endif
