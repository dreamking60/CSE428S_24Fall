# Studio6
## Exercise1
worked by Zihan Chen

## Exercise2
Write ST_A.h.
```cpp
#ifndef ST_A_H
#define ST_A_H

struct ST_A{
    int x1;
    int x2;
};

#endif
```

Write studio6.cpp
```cpp
#include "ST_A.h"
#include <iostream>
using std::cout;
using std::endl;

int main() {
    ST_A s1;
    cout << "-----Print ST_A-----" << endl;
    cout << "s1.x1: " << s1.x1 << endl;
    cout << "s1.x2: " << s1.x2 << endl;

    return 0;
}
```

When compile the program, it warns that x1 and x2 don't initialize.

But we can find that the program can still execute. x1 and x2 have the same result "0".
```
g++ -o studio6 -DUNIX   -Wall -W -g -std=c++17 -DTEMPLATE_HEADERS_INCLUDE_SOURCE studio6.cpp ST_A.cpp 
studio6.cpp: In function ‘int main()’:
studio6.cpp:9:29: warning: ‘s1.ST_A::x1’ may be used uninitialized in this function [-Wmaybe-uninitialized]
     cout << "s1.x1: " << s1.x1 << endl;
                             ^~
studio6.cpp:10:29: warning: ‘s1.ST_A::x2’ may be used uninitialized in this function [-Wmaybe-uninitialized]
     cout << "s1.x2: " << s1.x2 << endl;
                             ^~

-----Print ST_A-----
s1.x1: 0
s1.x2: 0
```

After I add a default constructor, the warning disappear and the result seems to be the same.
```cpp
    ST_A(): x1(0), x2(0) {}
```

```
-----Print ST_A-----
s1.x1: 0
s1.x2: 0
```

## Exercise3
After Revise class to struct, if we compile it directly, there will be many errors.

The function and variable in class is private in default, which means that the outer function cannot directly use its member variable and member function, so it cannot compile successfully. If we want to make its access by outer function or class, we need to use public as a key.
```
studio6.cpp: In function ‘int main()’:
studio6.cpp:7:10: error: ‘ST_A::ST_A()’ is private within this context
     ST_A s1;
          ^~
In file included from studio6.cpp:1:
ST_A.h:8:5: note: declared private here
     ST_A(): x1(0), x2(0) {}
     ^~~~
studio6.cpp:9:29: error: ‘int ST_A::x1’ is private within this context
     cout << "s1.x1: " << s1.x1 << endl;
                             ^~
In file included from studio6.cpp:1:
ST_A.h:5:9: note: declared private here
     int x1;
         ^~
studio6.cpp:10:29: error: ‘int ST_A::x2’ is private within this context
     cout << "s1.x2: " << s1.x2 << endl;
                             ^~
In file included from studio6.cpp:1:
ST_A.h:6:9: note: declared private here
     int x2;
         ^~
```

### public
When we use public, no error and program compile and execute successfully.
```
class ST_A{
    public: 
    int x1;
    int x2;

    ST_A(): x1(0), x2(0) {}
};
```

```
-----Print ST_A-----
s1.x1: 0
s1.x2: 0
```

### protected
When we use protected, error happened while compile.
```
class ST_A{
    protected: 
    int x1;
    int x2;

    ST_A(): x1(0), x2(0) {}
};
```

```
studio6.cpp: In function ‘int main()’:
studio6.cpp:7:10: error: ‘ST_A::ST_A()’ is protected within this context
     ST_A s1;
          ^~
In file included from studio6.cpp:1:
ST_A.h:9:5: note: declared protected here
     ST_A(): x1(0), x2(0) {}
     ^~~~
studio6.cpp:9:29: error: ‘int ST_A::x1’ is protected within this context
     cout << "s1.x1: " << s1.x1 << endl;
                             ^~
In file included from studio6.cpp:1:
ST_A.h:6:9: note: declared protected here
     int x1;
         ^~
studio6.cpp:10:29: error: ‘int ST_A::x2’ is protected within this context
     cout << "s1.x2: " << s1.x2 << endl;
                             ^~
In file included from studio6.cpp:1:
ST_A.h:7:9: note: declared protected here
     int x2;
         ^~
```

### private
private also has an error. (Same as without any key)
```
studio6.cpp: In function ‘int main()’:
studio6.cpp:7:10: error: ‘ST_A::ST_A()’ is private within this context
     ST_A s1;
          ^~
In file included from studio6.cpp:1:
ST_A.h:9:5: note: declared private here
     ST_A(): x1(0), x2(0) {}
     ^~~~
studio6.cpp:9:29: error: ‘int ST_A::x1’ is private within this context
     cout << "s1.x1: " << s1.x1 << endl;
                             ^~
In file included from studio6.cpp:1:
ST_A.h:6:9: note: declared private here
     int x1;
         ^~
studio6.cpp:10:29: error: ‘int ST_A::x2’ is private within this context
     cout << "s1.x2: " << s1.x2 << endl;
                             ^~
In file included from studio6.cpp:1:
ST_A.h:7:9: note: declared private here
     int x2;
         ^~
make: *** [Makefile:60: studio6] Error 1
```
## Exercise4
Error happened because const class cannot be changed. 
```
studio6.cpp:24:15: error: passing ‘const ST_A’ as ‘this’ argument discards qualifiers [-fpermissive]
     s2.setX1(4);
               ^
In file included from studio6.cpp:1:
ST_A.h:14:11: note:   in call to ‘ST_A& ST_A::setX1(int)’
     ST_A& setX1(int);
           ^~~~~
studio6.cpp:25:15: error: passing ‘const ST_A’ as ‘this’ argument discards qualifiers [-fpermissive]
     s2.setX2(8);
               ^
In file included from studio6.cpp:1:
ST_A.h:15:11: note:   in call to ‘ST_A& ST_A::setX2(int)’
     ST_A& setX2(int);
           ^~~~~
```


### Final Code



