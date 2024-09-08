#ifndef HOLDEMDECK_H
#define HOLDEMDECK_H

#include "Deck.h"
#include "Card_T.h"
#include "Suit.h"
#include <iostream>
#include <vector>

using std::ostream;
using std::vector;

enum class HoldEmRank {
    two, three, four, five, six, seven, eight, nine, ten, jack, queen, king, ace, undefined
};

ostream &operator<<(ostream &os, const HoldEmRank &hdrank);
HoldEmRank &operator++(HoldEmRank &hdrank);

class HoldEmDeck : Deck {
    private:
        vector<Card<HoldEmRank, Suit>> HoldEmCard;

    public:
        HoldEmDeck();

        void print(ostream &os) const override;
};

#endif