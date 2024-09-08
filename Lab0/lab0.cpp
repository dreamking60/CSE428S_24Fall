#include "Suit.h"
#include "Card_T.h"
#include "PinochleDeck.h"
#include "HoldEmDeck.h"
#include <iostream>
using namespace std;

int main() {
    PinochleDeck game0;
    HoldEmDeck game1;

    cout << "Pinochle Game: " << endl;
    game0.print(cout);
    cout << endl;

    cout << "HoldEm Game: " << endl;
    game1.print(cout);

    return 0;
}