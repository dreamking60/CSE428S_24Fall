#ifndef PINOCHLEDECK_H
#define PINOCHLEDECK_H

#include "Deck.h"
#include "Suit.h"
#include "Card_T.h"
#include <vector>
#include <iostream>
using std::ostream;
using std::vector;

enum class PinochleRank {
    nine, jack, queen, king, ten, ace, undefined
};

ostream &operator<<(ostream &os, const PinochleRank &pr);
PinochleRank &operator++(PinochleRank &pr);

class PinochleDeck : Deck {
    private:
        vector<Card<PinochleRank,Suit>> PinochleCard;

    public:
        PinochleDeck();

        void print(ostream &os) const override;

};

#endif