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