#include "Trainer.h"

bool Trainer::outOfPokemon(){ 
    return list.size() == 0;
}
    
void  Trainer::addPokemon(Pokemon * p){
    list.push_back(p);
}

string  Trainer::getName(){
    return name;
}

/*
 This function prints out each pokemon on a trainers team
 followed by thier current health and a newline. For ex:
 "Bulbasaur 35"
 "Charmander 30"
*/
void  Trainer::viewTeam(){
    //FIXME
}
    
void  Trainer::losePokemon(int index){
    list.erase(list.begin() + index);
}
    
void  Trainer::attackPlayer(Trainer * opponent, int index, int enemyIndex){
    //attack the pokemon
    list.at(index)->attack(opponent->list.at(enemyIndex));
    if(opponent->list.at(enemyIndex)->getHealth() <= 0){
        cout << "You killed that pokemon!" << endl;
        opponent->losePokemon(enemyIndex);
    }
    else{
        cout << endl <<opponent->list.at(enemyIndex)->getName() << " is still alive";
        cout << " with "  << opponent->list.at(enemyIndex)->getHealth() << " left." << endl;
    }
}


