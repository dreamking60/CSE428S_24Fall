# Lab0 Readme
author: Zihan(or Steven) Chen
email: chensteven@wustl.edu

## Design
A enum type Suit
- Has 5 types: clubs, diamonds, hearts, spades and undefined.
- With 2 operator: << and prefix ++

A struct Card
- Has 2 variables: R rank and S suit
- With 1 operator: <<

An abstract class Deck with a virtual function print()

A Phinochle game:
- A PinochleRank enum 
    - with 2 operator << & prefix ++
    - 7 types: nine, jack, queen, king, ten, ace, undefined
- A class PinochleDeck derived from Deck
    - Card with PinochleRank and Suit
    - Also has a default constructor with twice each Card
    - has a print function derived from Deck and print all cards with Same Rank in one line

A HoldEm game:
- A HoldEmRank enum 
    - with 2 operator << & prefix ++
    - 14 types: two, three, four, five, six, seven, eight, nine, ten, jack, queen, king, ace, undefined
- A class HoldEmDeck derived from Deck
    - Card with HoldEmRank and Suit
    - Default constructor with once each Card
    - has a print function derived from Deck and print all cards with Same Rank in one line

## Warning and Error
In fact, I have faced many warnings and errors, however, I solve them immediately when I write each .h and .cpp. I run test while I write each function and variables.
So while in 13, I can't detail write down all the warnings I face... Because I can only write them through my memory.

Warning face about virtual function:
1. I have no idea how to write a virtual function. 
At first, I write without any definition since I thought that there is no need for me to write that. 
Howeer, I find the problem while in my test. It saids that no definition and search in Internet.
Resources tell me that I should have `const = 0` after my declaration.
When I override it, I should have `const override` after my declaration and `const` after my definition.

Error:
1. Facutly writing postfix ++ in prefix ++ function and with error message.

## After coding
I don't know why use txt file since I think markdown and pdf could have a better view.

