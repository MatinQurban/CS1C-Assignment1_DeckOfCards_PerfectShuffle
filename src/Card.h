// Header file for card class
// Description: This class represents a card in a deck of cards. It has a suit and a rank.
// SUITS: Spades, Hearts, Diamonds, Clubs
// RANKS: Ace, 2-10, Jack, Queen, King

#ifndef CARD_H
#define CARD_H

#include <string>
#include <iostream>

using namespace std;

enum Suit {Spades, Hearts, Diamonds, Clubs};
enum Rank {Ace=1, Two, Three, Four, Five, Six, Seven, Eight, Nine, Ten, Jack, Queen, King};

class Card
{
public:
    Card();
    Card(Suit s, Rank r);
    Suit getSuit();
    Rank getRank();
    void printCard();

private:
    Suit suit;
    Rank rank;
};


#endif //CARD_H