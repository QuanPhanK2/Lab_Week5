#include <iostream>
using namespace std;

class Coin{
    private:
        string sideUp;
    public:
    Coin();
    // Coin(string sideUp);
    void toss();
    string getSideUp();
    void display();
};