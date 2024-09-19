#include <iostream>
using namespace std;

int baz(int * &q, int & k) {
    q = &k;
    return *q;
}


int foo() {
    int i = 7;
    int j = 4;
    int *p = &i;
    return baz(p, j);
}


int main() {
    cout << foo() << endl;
    return 0;
}