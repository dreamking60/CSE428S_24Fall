#ifndef DECK_H
#define DECK_H
#include <iostream>
using std::ostream;

class Deck{
    public:
        virtual void print(ostream &os);
};


#endif