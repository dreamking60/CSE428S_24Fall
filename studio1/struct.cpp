#ifndef STRUCT_CPP
#define STRUCT_CPP

#include "struct.h"

template <typename T>
Studio1_Struct<T>::Studio1_Struct(T v) : value(v){}

template <typename T>
ostream &operator<<(ostream &os, const Studio1_Struct<T> &item) {
    os << item.value;
    return os;
}

#endif