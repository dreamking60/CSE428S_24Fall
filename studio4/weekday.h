#ifndef WEEKDAY
#define WEEKDAY
#include <iostream>
using std::ostream;

enum class Weekday{
    Sun,
    Mon,
    Tue,
    Wed,
    Thu,
    Fri,
    Sat,
};

Weekday operator--(Weekday &day, int);
Weekday operator++(Weekday &day, int);
ostream &operator<<(ostream &os, const Weekday &day);


#endif