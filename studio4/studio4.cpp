#include <iostream>
#include <set>
#include <algorithm>
#include <iterator>
#include "pressure.h"
#include "weekday.h"
using std::cout;
using std::endl;
using std::set;
using std::set_intersection;
using std::inserter;
using std::set_union;

int main() {
    Pressure a = Pressure::lo;
    cout << "-----Pressure << and ++ order comparing-----" << endl;
    cout << "First a: " << a << endl;
    cout << "First ++a: " << ++a << endl;
    cout << "Second ++a: " << ++a << endl;

    Pressure p1 = Pressure::med;
    Pressure p2 = Pressure::hi;
    Weekday w1 = Weekday::Mon;
    Weekday w2 = Weekday::Thu;

    cout << "-----Pressure operator < test-----" << endl;
    cout << "p1: " << p1 << ", p2: " << p2 << endl;
    if(p1 < p2) {
        cout << "p1 < p2: Yes" << endl;
    } else {
        cout << "p1 < p2: No" << endl;
    }

    cout << "-----Weekday opeartor < test-----" << endl;
    cout << "w1: " << w1 << ", w2: " << w2 << endl;
    if(w1 < w2) {
        cout << "w1 < w2: Yes" << endl;
    } else {
        cout << "w1 < w2: No" << endl;
    }

    set<Weekday> work_Set = {Weekday::Mon, Weekday::Tue, Weekday::Wed, Weekday::Thu, Weekday::Fri};
    set<Weekday> rest_Set = {Weekday::Sat, Weekday::Sun, Weekday::Mon};

    cout << "-----Work Set Start-----" << endl;
    for(const Weekday &x : work_Set) {
        cout << x << endl;
    }
    cout << "-----Work Set End-----" << endl;

    cout << "-----Rest Set Start-----" << endl;
    for(const Weekday &x : rest_Set) {
        cout << x << endl;
    }
    cout << "-----Rest Set End-----" << endl;

    set<Weekday> IS_Set;
    set_intersection(work_Set.begin(), work_Set.end(), rest_Set.begin(), rest_Set.end(), inserter(IS_Set, IS_Set.end()));
    cout << "-----Set Intersection Start-----" << endl;
    for(const Weekday &x : IS_Set) {
        cout << x << endl;
    }
    cout << "-----Set Intersection End-----" << endl;

    set<Weekday> Union_Set;
    set_union(work_Set.begin(), work_Set.end(), rest_Set.begin(), rest_Set.end(), inserter(Union_Set, Union_Set.end()));
    cout << "-----Set Union Start-----" << endl;
    for(const Weekday &x : Union_Set) {
        cout << x << endl;
    }    
    cout << "-----Set Union End-----" << endl;

    return 0;
}