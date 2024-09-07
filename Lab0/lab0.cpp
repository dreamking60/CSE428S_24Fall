#include "Suit.h"
#include "Card_T.h"
#include <iostream>
using namespace std;

int main() {
    Suit s = Suit::clubs;
    // Suit cur;
    // do{
    //     cout << s << endl;
    //     cur = s;
    //     ++s;
    // } while(s != cur);


    Card<int, Suit> card = Card<int, Suit>{1, s};
    cout << card << endl;

    return 0;
}