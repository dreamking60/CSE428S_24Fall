#ifndef SUIT_H
#define SUIT_H

#include <iostream>
using std::ostream;

enum class Suit {
    clubs, diamonds, hearts, spades, undefined
};

Suit& operator++(Suit &s);
ostream &operator<<(ostream &os, const Suit &s);

#endif