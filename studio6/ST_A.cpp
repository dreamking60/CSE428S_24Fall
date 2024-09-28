#include "ST_A.h"

int ST_A::getX1() const{
    return x1;
}

int ST_A::getX2() const{
    return x2;
}

ST_A& ST_A::setX1(int x) {
    x1 = x;
    return *this;
}

ST_A& ST_A::setX2(int x) {
    x2 = x;
    return *this;
}
