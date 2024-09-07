#ifndef CARD_T_H
#define CARD_T_H
#include <iostream>
using std::ostream;

template <typename R, typename S>
struct Card {
    R rank;
    S suit;

    public: 
        Card<R, S>(R r, S s);

    template <typename U, typename V>
    friend ostream &operator<<(ostream &os,  const Card<U, V> &card);
};

#ifdef TEMPLATE_HEADERS_INCLUDE_SOURCE
#include "Card_T.cpp"
#endif

#endif