#include "pressure.h"

Pressure &operator++(Pressure &p) {
    switch(p) {
        case Pressure::lo: p = Pressure::med; break;
        case Pressure::med: p = Pressure::hi; break;
        case Pressure::hi: p = Pressure::pop; break;
        case Pressure::pop: p = Pressure::pop; break;
    }
    return p;
} 

ostream &operator<<(ostream &os, const Pressure &p) {
    switch(p) {
        case Pressure::lo: os << "Low"; break;
        case Pressure::med: os << "Medium"; break;
        case Pressure::hi: os << "High"; break;
        case Pressure::pop: os << "Pop"; break;
    }
    return os;
}