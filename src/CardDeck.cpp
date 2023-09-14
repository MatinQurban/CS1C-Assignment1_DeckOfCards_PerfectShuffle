// CPP file for CardDeck class

#include "CardDeck.h"

CardDeck::CardDeck()
{
    int deckPos = 0;
    for(int suit = Spades; suit <= Clubs; suit++)
    {
        for(int rank = Ace; rank <= King; rank++)
        {
            Card *tempCard = new Card(suit,rank);
            deck[deckPos] = *tempCard;
            deckPos++;
        }

    }
    

}

CardDeck::CardDeck(Card c[])
{
    for(int i = 0; i < 52; i++)
    {
        deck[i] = c[i];
    }
}

CardDeck CardDeck::perfectShuffle()
{
    CardDeck shuffledDeck;
    int deckPos = 0;
    for(int i = 0; i < 26; i++)
    {
        shuffledDeck.deck[deckPos] = deck[i];
        deckPos += 2;
    }
    deckPos = 1;
    for(int i = 26; i < 52; i++)
    {
        shuffledDeck.deck[deckPos] = deck[i];
        deckPos += 2;
    }
    return shuffledDeck;
}

void CardDeck::printDeck()
{
    for(int i = 0; i < 52; i++)
    {
        deck[i].printCard();
    }
}

bool CardDeck::operator==(const CardDeck& otherDeck) const
{
    for(int i = 0; i < 52; i++)
    {
        if(deck[i].getSuit() != otherDeck.deck[i].getSuit() || deck[i].getRank() != otherDeck.deck[i].getRank())
        {
            return false;
        }
    }
    return true;
}