#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <stdio.h>
#include "Pokemon.h"
#include "Charmander.h"
#include "Squirtle.h"
#include "Bulbasaur.h"
#include "Trainer.h"

using namespace std;

/*
Returns a pokemon pointer that is pointing to either a 
Bulbasaur, Squirtle or Charmander object.
*/
Pokemon * Breeder(){
  //FIXME
}

void clearScreen(){
    cout << "\033c" << endl;
}

int main(){
    srand(time(0));
    int turn = 0;
    char c;
    Trainer * player1 = new Trainer("Red");
    Trainer * player2 = new Trainer("Joey");
    //populate the team
    for(unsigned i = 0; i < 5; i++){
        player1->addPokemon(Breeder());
        player2->addPokemon(Breeder());
    }  
    
    while(!player1->outOfPokemon() && !player2->outOfPokemon()){
        clearScreen();
        player1->viewTeam();
        cout << endl;
        player2->viewTeam();
        int index, enemyIndex;
        cout << endl;
        if(turn){
            cout << player1->getName() << "'s turn " << endl;
            cout << "Choose your attacking pokemon: " << endl;
            cin >> index;
            cout << "Choose your pokemon being attacked: " << endl;
            cin >> enemyIndex;
            player1->attackPlayer(player2,index,enemyIndex);
        }
        else{
            cout << player2->getName() << "'s turn " << endl;
            cout << "Choose your attacking pokemon: " << endl;
            cin >> index;
            cout << "Choose your pokemon being attacked: " << endl;
            cin >> enemyIndex;
            player2->attackPlayer(player1,index, enemyIndex);
        }
        
        cout << "press enter to switch turn:";
        cin.ignore();
        cin.get();
        turn = !turn;
    }
    
    if(!turn){
         cout << player1->getName() << " won " << endl;
    }
    else{
         cout << player2->getName() << " won " << endl;
    }
    
    return 0;
}

















//01000001 01110011 01101011 00100000 01000001 01101110 01100100 01110010 01100101 00100000 01100001 01100010 01101111 01110101 01110100 00100000 01110100 01101000 01100101 00100000 01110100 01101001 01101101 01100101 00100000 01001001 00100000 00110110 00100000 00110000 00100111 01100100 00100000 01101000 01101001 01101101
