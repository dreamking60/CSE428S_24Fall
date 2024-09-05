#ifndef STRUCT_H
#define STRUCT_H
#include <iostream>
using std::ostream;

template <typename T = int>
class Studio1_Struct{
    private: T value;
    public: 
        Studio1_Struct(T v);

        template <typename U>
        friend ostream &operator<<(ostream &os, const Studio1_Struct<U> &item);

    // suppress the compiler's synthesis 
    // Copy constructor and copy assignment constructor will calling by swap while running, so they can't be deleted.
    //Studio1_Struct(const Studio1_Struct&) = delete; // (1) copy constructor
    //Studio1_Struct& operator=(const Studio1_Struct&) = delete; // (2) copy assignment constructor

    // Destructor is a must, if we don't have destructor, then we can't delete the Studio1_Struct.
    //~Studio1_Struct() = delete; // (3) destruct
};

#include "struct.cpp"
#endif