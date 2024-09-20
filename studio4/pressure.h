#ifndef PRESSURE_H
#define PRESSURE_H

#include <iostream>
using std::ostream;

enum class Pressure {
    lo, med, hi, pop
};
Pressure &operator++(Pressure &p);
ostream &operator<<(ostream &os, const Pressure &p);


#endif