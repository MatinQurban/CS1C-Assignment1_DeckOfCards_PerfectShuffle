// Header file for deck of cards class.
// Description: This class represents a deck of cards. It has an array of cards and can perfectly shuffle them.

#ifndef CARDDECK_H
#define CARDDECK_H


#include "Card.h"


class CardDeck
{
public:
    CardDeck();
    CardDeck(Card c[]);

    CardDeck perfectShuffle();
    void printDeck();
    bool operator==(const CardDeck& otherDeck) const;

private:
    Card deck[52];

};








#endif //CARDDECK_H