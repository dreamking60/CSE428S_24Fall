#ifndef PRESSURE_H
#define PRESSURE_H

#include <iostream>
using std::ostream;

enum class Pressure {
    lo, med, hi, pop
};
Pressure operator++(Pressure &p);
ostream &operator<<(ostream &os, const Pressure &p);

Pressure operator++(Pressure &p) {
    Pressure cur = p;
    switch(p) {
        case Pressure::lo: p = Pressure::med; break;
        case Pressure::med: p = Pressure::hi; break;
        case Pressure::hi: p = Pressure::pop; break;
        case Pressure::pop: p = Pressure::pop; break;
    }
    return cur;
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


#endif