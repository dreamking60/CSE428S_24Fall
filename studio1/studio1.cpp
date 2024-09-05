#include "struct.h"
#include <iostream>

using namespace std;

const int SUCCESS = 0;

int main() {
    Studio1_Struct<> x(1);
    Studio1_Struct<> y(2);

    cout << x << " " << y << endl;

    swap(x, y);

    cout << x<< " "  << y << endl;

    return SUCCESS;
}