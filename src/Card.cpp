// Cpp file for card class


#include "Card.h"

Card::Card()
{
    suit = Spades;
    rank = Ace;
}

Card::Card(Suit s, Rank r)
{
    suit = s;
    rank = r;
}

Card::Card(int s, int r)
{
    suit = static_cast<Suit>(s);
    rank = static_cast<Rank>(r);
}

Card::Suit Card::getSuit()
{
    return suit;
}

Card::Rank Card::getRank()
{
    return rank;
}

void Card::printCard()
{
    string suitString;
    string rankString;

    switch (suit)
    {
        case Spades:
            suitString = "Spades";
            break;
        case Hearts:
            suitString = "Hearts";
            break;
        case Diamonds:
            suitString = "Diamonds";
            break;
        case Clubs:
            suitString = "Clubs";
            break;
    }

    switch (rank)
    {
        case Ace:
            rankString = "Ace";
            break;
        case Jack:
            rankString = "Jack";
            break;
        case Queen:
            rankString = "Queen";
            break;
        case King:
            rankString = "King";
            break;
        default:
            rankString = to_string(rank);
            break;
    }

    cout << rankString + " of " + suitString;
}

