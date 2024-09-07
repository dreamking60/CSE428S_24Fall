#include "Suit.h"

Suit& operator++(Suit &s) {
    Suit &cur = s;
    switch(s) {
        case(Suit::clubs): s = Suit::diamonds; break;
        case(Suit::diamonds): s = Suit::hearts; break;
        case(Suit::hearts): s = Suit::spades; break;
        case(Suit::spades): s = Suit::undefined; break;
        case(Suit::undefined): break;
    }
    return cur;
}

ostream &operator<<(ostream &os, const Suit &s) {
    switch(s) {
        case(Suit::clubs): os << "C"; break;
        case(Suit::diamonds): os << "D"; break;
        case(Suit::hearts): os << "H"; break;
        case(Suit::spades): os << "S"; break;
        case(Suit::undefined): os << "?"; break;
    }

    return os;
}