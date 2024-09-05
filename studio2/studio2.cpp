#include "weekday.h"
#include <iostream>
using namespace std;

int main() {
    Weekday today = Weekday::Tue;
    cout << today << endl;

    Weekday start = today;
    cout << "loop start" << endl;
    do{
        cout << start << endl;
        start++;
    }while(start != today);

    return 0;
}