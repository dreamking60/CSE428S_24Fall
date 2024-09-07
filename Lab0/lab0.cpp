#include "Suit.h"
#include <iostream>
using namespace std;

int main() {
    Suit s = Suit::clubs;
    Suit cur;
    do{
        cout << s << endl;
        cur = s;
        ++s;
    } while(s != cur);

    return 0;
}