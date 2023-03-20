#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Coin.h"
using namespace std;

Coin::Coin(){
    srand(time(NULL));
    if(rand()%2 == 0){
        sideUp = "heads";
    }else{
        sideUp = "tails";
    }
}
void Coin::toss(){
    srand(time(NULL));
    if(rand()%2 == 0){
        sideUp = "heads";
    }else{
        sideUp = "tails";
    }
}
string Coin::getSideUp(){
    return this-> sideUp;
}
void Coin::display(){
    if(this -> sideUp == "heads"){
        cout << "Mat dong xu dang ngua!" <<endl;
    }else{
        cout << "Mat dong xu dang sap!" << endl;
    }
}