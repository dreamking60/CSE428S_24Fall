#include "weekday.h"
#include "pressure.h"
#include <iostream>
using namespace std;

int main() {
    Weekday today = Weekday::Tue;
    cout << today << endl;

    // Weekday start = today;
    // cout << "++ loop start" << endl;
    // do{
    //     cout << start << endl;
    //     start++;
    // }while(start != today);

    // cout << "-- loop start" << endl;
    // do{
    //     cout << start << endl;
    //     start--;
    // }while(start != today);


    Pressure pre = Pressure::lo;
    cout << pre << endl;

    cout << "++ loop start" << endl;
    Pressure cur = pre;
    do{
        cout << pre << endl;
        cur = pre;
        ++pre;
    } while(cur != pre);

    return 0;
}