# Studio5

## Exercise1
worked by Zihan Chen

## Exercise2

### Code
```cpp
#include <iostream>
#include <cstring>

using std::cout;
using std::endl;
using std::strlen;

int main() {
    const char * c1 = "CyberSecurity";
    const char * c2 = "SystemSecurity";

    cout << "-----Print c1 & c2-----" << endl;
    cout << "c1: " << "\"" << c1 << "\"" << endl;
    cout << "c1 length: " << strlen(c1) << endl;
    cout << "c2: " << "\"" << c2 << "\"" << endl;
    cout << "c2 length: " << strlen(c2) << endl;

    return 0;
}
```

### Result
```
-----Print c1 & c2-----
c1: "CyberSecurity"
c1 length: 13
c2: "SystemSecurity"
c2 length: 14
```

## Exercise3
### Code
```cpp
    size_t (*FuncPtr)(const char *);
    FuncPtr = strlen;
    cout << "-----Print c1 & c2-----" << endl;
    cout << "c1: " << "\"" << c1 << "\"" << endl;
    cout << "c1 length: " << (*FuncPtr)(c1) << endl;
    cout << "c2: " << "\"" << c2 << "\"" << endl;
    cout << "c2 length: " << (*FuncPtr)(c2) << endl; 

```

### Result
```
-----Print c1 & c2-----
c1: "CyberSecurity"
c1 length: 13
c2: "SystemSecurity"
c2 length: 14
-----Print c1 & c2-----
c1: "CyberSecurity"
c1 length: 13
c2: "SystemSecurity"
c2 length: 14
```

## Exercise4
We initial f1 with pi/2, but we soon find that the result of cos(f1) is not 0.
This is because float can't be accurately calculate in computer for it's basis is integer.
For solving this problem, there are some other special types created for maths calculation.
Similar problem we can find in  `0.1 + 0.2 = 0.300...004`.
### Code
```cpp
    float f1 = M_PI/2;
    cout << "-----Print float and sin(cos())-----" << endl;
    cout << "f1: " << f1 << endl;
    cout << "cos(f1): " << cos(f1) << endl;
    cout << "sin(cos(f1)): " << sin(cos(f1)) << endl;
```

### Result
```
-----Print float and sin(cos())-----
f1: 1.5708
cos(f1): -4.37114e-08
sin(cos(f1)): -4.37114e-08
```

## Exercise5

### Code
```cpp
    function<float (float)> sn = [](auto i) { return sin(i);};
    function<float (float)> cs = [](auto i) { return cos(i);};

    cout << "-----Print float and sin(cos())-----" << endl;
    cout << "f1: " << f1 << endl;
    cout << "cs(f1): " << cs(f1) << endl;
    cout << "sn(cs(f1)): " << sn(cos(f1)) << endl;
```

### Result
```
-----Print float and sin(cos())-----
f1: 1.5708
cs(f1): -4.37114e-08
sn(cs(f1)): -4.37114e-08
```

## Exercise6

### Code
```cpp
    auto composeFunc = compose(sn, cs);
    cout << "-----Print Compose-----" << endl;
    cout << "f1: " << f1 << endl;
    cout << "sn(cs(f1)): " << composeFunc(f1) << endl;
```

### Result
```
-----Print Compose-----
f1: 1.5708
sn(cs(f1)): -4.37114e-08

```

## Exercise7
### Code
```cpp
    auto bindFunc = bind<float>(composeFunc, f1);
    cout << "-----Print Bind-----" << endl;
    cout << "f1: " << f1 << endl;
    cout << "sn(cs(f1)): " << bindFunc() << endl;
```

### Result
```
-----Print Bind-----
f1: 1.5708
sn(cs(f1)): -4.37114e-08
```