#include "ST_A.h"
#include <iostream>
using std::cout;
using std::endl;

int main() {
    ST_A s1;
    const ST_A s2;
    // cout << "-----Print ST_A-----" << endl;
    // cout << "s1.x1: " << s1.x1 << endl;
    // cout << "s1.x2: " << s1.x2 << endl;

    cout << "-----Print s1-----" << endl;
    cout << "s1.getX1(): " << s1.getX1() << endl;
    cout << "s1.getX2(): " << s1.getX2() << endl;

    cout << "-----Print s2-----" << endl;
    cout << "s2.getX1(): " << s2.getX1() << endl;
    cout << "s2.getX2(): " << s2.getX2() << endl;

    s1.setX1(4);
    s1.setX2(8);

    s2.setX1(4);
    s2.setX2(8);

    cout << "-----Print s1-----" << endl;
    cout << "s1.getX1(): " << s1.getX1() << endl;
    cout << "s1.getX2(): " << s1.getX2() << endl;

    cout << "-----Print s2-----" << endl;
    cout << "s2.getX1(): " << s2.getX1() << endl;
    cout << "s2.getX2(): " << s2.getX2() << endl;


    return 0;
}