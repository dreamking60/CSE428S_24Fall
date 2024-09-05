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

Weekday operator--(Weekday &day, int) {
    Weekday tmp = day;
    switch(day) {
        case Weekday::Sun: day = Weekday::Sat; break;
        case Weekday::Mon: day = Weekday::Sun; break;
        case Weekday::Tue: day = Weekday::Mon; break;
        case Weekday::Wed: day = Weekday::Tue; break;
        case Weekday::Thu: day = Weekday::Wed; break;
        case Weekday::Fri: day = Weekday::Thu; break;
        case Weekday::Sat: day = Weekday::Fri; break;
    }

    return tmp;
}

Weekday operator++(Weekday &day, int) {
    Weekday tmp = day;
    switch(day) {
        case Weekday::Sun: day = Weekday::Mon; break;
        case Weekday::Mon: day = Weekday::Tue; break;
        case Weekday::Tue: day = Weekday::Wed; break;
        case Weekday::Wed: day = Weekday::Thu; break;
        case Weekday::Thu: day = Weekday::Fri; break;
        case Weekday::Fri: day = Weekday::Sat; break;
        case Weekday::Sat: day = Weekday::Sun; break;
    }

    return tmp;
}

ostream &operator<<(ostream &os, const Weekday &day) {
    switch(day) {
        case Weekday::Sun: os << "Sunday"; break;
        case Weekday::Mon: os << "Monday"; break;
        case Weekday::Tue: os << "Tuesday"; break;
        case Weekday::Wed: os << "Wednesday"; break;
        case Weekday::Thu: os << "Thursday"; break;
        case Weekday::Fri: os << "Friday"; break;
        case Weekday::Sat: os << "Saturday"; break;
        default: os << "error";
    }

    return os;
}

#endif