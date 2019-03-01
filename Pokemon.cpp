#include "Pokemon.h"

Pokemon::Pokemon():name("Missingno."), health(100), sp_attack(0){}

Pokemon::Pokemon(TYPE t,string name, int health, int sp_attack):type(t), name(name),health(health), sp_attack(sp_attack){}

string Pokemon:: getName(){
    return name;
}

int Pokemon::getHealth(){
    return health;
}

TYPE Pokemon::getType(){
    return type;
}

void Pokemon::damage(int d){
    health -= d;
}
