#include <iostream> 
#include "Coin.h"

int main(){
    Coin xu1;
    for (int i = 0; i <= 20; i++)
    {
        xu1.toss();
        xu1.display();
    }
    
}