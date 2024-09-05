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

ostream &operator<<(ostream &os, const Weekday &day);

ostream &operator<<(ostream &os, const Weekday &day) {
    switch(day) {
        case Weekday::Sun: os << "Sunday"; break;
        case Weekday::Mon: os << "Monday"; break;
        case Weekday::Tue: os << "Tuesday"; break;
        case Weekday::Wed: os << "Wednesday"; break;
        case Weekday::Thu: os << "Thursday"; break;
        case Weekday::Fri: os << "Friday"; break;
        case Weekday::Sat: os << "Saturday"; break;
    }

    return os;
}
#endif