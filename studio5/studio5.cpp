#include <iostream>
#include <cstring>
#include <cmath>
#include <functional>
#include "Compose_T.h"

using std::cout;
using std::endl;
using std::strlen;
using std::size_t;
using std::function;
using std::bind;


int main() {
    const char * c1 = "CyberSecurity";
    const char * c2 = "SystemSecurity";

    cout << "-----Print c1 & c2-----" << endl;
    cout << "c1: " << "\"" << c1 << "\"" << endl;
    cout << "c1 length: " << strlen(c1) << endl;
    cout << "c2: " << "\"" << c2 << "\"" << endl;
    cout << "c2 length: " << strlen(c2) << endl;

    size_t (*FuncPtr)(const char *);
    FuncPtr = strlen;
    cout << "-----Print c1 & c2-----" << endl;
    cout << "c1: " << "\"" << c1 << "\"" << endl;
    cout << "c1 length: " << (*FuncPtr)(c1) << endl;
    cout << "c2: " << "\"" << c2 << "\"" << endl;
    cout << "c2 length: " << (*FuncPtr)(c2) << endl; 

    float f1 = M_PI/2;
    cout << "-----Print float and sin(cos())-----" << endl;
    cout << "f1: " << f1 << endl;
    cout << "cos(f1): " << cos(f1) << endl;
    cout << "sin(cos(f1)): " << sin(cos(f1)) << endl;

    function<float (float)> sn = [](auto i) { return sin(i);};
    function<float (float)> cs = [](auto i) { return cos(i);};

    cout << "-----Print float and sin(cos())-----" << endl;
    cout << "f1: " << f1 << endl;
    cout << "cs(f1): " << cs(f1) << endl;
    cout << "sn(cs(f1)): " << sn(cos(f1)) << endl;

    auto composeFunc = compose(sn, cs);
    cout << "-----Print Compose-----" << endl;
    cout << "f1: " << f1 << endl;
    cout << "sn(cs(f1)): " << composeFunc(f1) << endl;

    auto bindFunc = bind<float>(composeFunc, f1);
    cout << "-----Print Bind-----" << endl;
    cout << "f1: " << f1 << endl;
    cout << "sn(cs(f1)): " << bindFunc() << endl;


    return 0;
}