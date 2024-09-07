#include "Card_T.h"

template <typename R, typename S>
Card<R, S>::Card(R r, S s): rank(r), suit(s) {}

template <typename R, typename S>
ostream &operator<<(ostream &os, const Card<R, S> &card) {
    os << card.rank << card.suit;
    return os;
}