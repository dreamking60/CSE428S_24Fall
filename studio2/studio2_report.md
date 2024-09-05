# studio2 report

## test1
weekday.h
```cpp
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
```

studio2.cpp
```cpp
#include "weekday.h"
#include <iostream>
using namespace std;

int main() {
    Weekday today = Weekday::Tue;
    cout << today << endl;

    return 0;
}
```
Result
```
Tuesday
```

## test2
```cpp
// in weekday.h
Weekday operator++(Weekday &day, int);

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

// in studio2.cpp
    Weekday start = today;
    cout << "loop start" << endl;
    do{
        cout << start << endl;
        start++;
    }while(start != today);
```

Result
```
Tuesday
loop start
Tuesday
Wednesday
Thursday
Friday
Saturday
Sunday
Monday
```

