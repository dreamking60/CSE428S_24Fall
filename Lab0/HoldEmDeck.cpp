#include "HoldEmDeck.h"


ostream &operator<<(ostream &os, const HoldEmRank &hdrank) {
    switch(hdrank) {
        case(HoldEmRank::two): os << "2"; break;
        case(HoldEmRank::three): os << "3"; break;
        case(HoldEmRank::four): os << "4"; break;
        case(HoldEmRank::five): os << "5"; break;
        case(HoldEmRank::six): os << "6"; break;
        case(HoldEmRank::seven): os << "7"; break;
        case(HoldEmRank::eight): os << "8"; break;
        case(HoldEmRank::nine): os << "9"; break;
        case(HoldEmRank::ten): os << "10"; break;
        case(HoldEmRank::jack): os << "J"; break;
        case(HoldEmRank::queen): os << "Q"; break;
        case(HoldEmRank::king): os << "K"; break;
        case(HoldEmRank::ace): os << "A"; break;
        case(HoldEmRank::undefined): os << "?"; break;
    }
    return os;
}
HoldEmRank &operator++(HoldEmRank &hdrank) {
    switch(hdrank) {
        case(HoldEmRank::two): hdrank = HoldEmRank::three; break;
        case(HoldEmRank::three): hdrank = HoldEmRank::four; break;
        case(HoldEmRank::four): hdrank = HoldEmRank::five; break;
        case(HoldEmRank::five): hdrank = HoldEmRank::six; break;
        case(HoldEmRank::six): hdrank = HoldEmRank::seven; break;
        case(HoldEmRank::seven): hdrank = HoldEmRank::eight; break;
        case(HoldEmRank::eight): hdrank = HoldEmRank::nine; break;
        case(HoldEmRank::nine): hdrank = HoldEmRank::ten; break;
        case(HoldEmRank::ten): hdrank = HoldEmRank::jack; break;
        case(HoldEmRank::jack): hdrank = HoldEmRank::queen; break;
        case(HoldEmRank::queen): hdrank = HoldEmRank::king; break;
        case(HoldEmRank::king): hdrank = HoldEmRank::ace; break;
        case(HoldEmRank::ace): hdrank = HoldEmRank::undefined; break;
        case(HoldEmRank::undefined): break;
    }
    return hdrank;
}

HoldEmDeck::HoldEmDeck() {
    for(HoldEmRank i=HoldEmRank::two; i < HoldEmRank::undefined; ++i) {
        for(Suit j=Suit::clubs; j < Suit::undefined; ++j) {
            HoldEmCard.push_back(Card<HoldEmRank, Suit>{i,j});
        }
    }
}

void HoldEmDeck::print(ostream &os) const {
    HoldEmRank prev = HoldEmCard[0].rank;
    for(Card<HoldEmRank,Suit> card: HoldEmCard) {
        if(card.rank != prev) {
            os << "\n";
            prev = card.rank;
        }
        os << card << " ";
    }
    os << "\n";
}