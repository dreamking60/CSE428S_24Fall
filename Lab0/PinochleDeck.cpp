#include "PinochleDeck.h"

ostream &operator<<(ostream &os, const PinochleRank &pr) {
    switch(pr) {
        case(PinochleRank::nine): os << "9"; break;
        case(PinochleRank::jack): os << "J"; break;
        case(PinochleRank::queen): os << "Q"; break;
        case(PinochleRank::king): os << "K"; break;
        case(PinochleRank::ten): os << "10"; break;
        case(PinochleRank::ace): os << "A"; break;
        case(PinochleRank::undefined): os << "?"; break;
    }

    return os;
}

PinochleRank &operator++(PinochleRank &pr) {
    switch(pr) {
        case(PinochleRank::nine): pr = PinochleRank::jack; break;
        case(PinochleRank::jack): pr = PinochleRank::queen; break;
        case(PinochleRank::queen): pr = PinochleRank::king; break;
        case(PinochleRank::king): pr = PinochleRank::ten; break;
        case(PinochleRank::ten): pr = PinochleRank::ace; break;
        case(PinochleRank::ace): pr = PinochleRank::undefined; break;
        case(PinochleRank::undefined): break;
    }
    return pr;
}

PinochleDeck::PinochleDeck() {
    for(PinochleRank i = PinochleRank::nine; i != PinochleRank::undefined; ++i) {
        for(Suit j = Suit::clubs; j != Suit::undefined; ++j) {
            PinochleCard.push_back(Card<PinochleRank, Suit>{i,j});
            PinochleCard.push_back(Card<PinochleRank, Suit>{i,j});
        }
    }
}

void PinochleDeck::print(ostream &os) const {
    PinochleRank pre = PinochleCard[0].rank;
    for(Card<PinochleRank, Suit> card: PinochleCard) {
        if(card.rank != pre) {
            os << "\n";
            pre = card.rank;
        }
        os << card << " ";
    }
    os << "\n";
}