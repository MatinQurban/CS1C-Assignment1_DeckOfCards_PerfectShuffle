// Main file to test Card and CardDeck classes, including printing and perfect shuffle
// Print out the initial, the deck after the first perfect shuffle, and the final deck.
// Print out how many perfect shuffles are necessary to return the deck to its original configuration.


#include "CardDeck.h"


int main()
{
    CardDeck deck;
    CardDeck shuffledDeck = deck.perfectShuffle();

    int shuffleCount = 1;

    while(!(deck == shuffledDeck))
    {
        shuffledDeck = shuffledDeck.perfectShuffle();
        shuffleCount++;
    }


    cout << "Initial Deck: " << endl;
    deck.printDeck();
    cout << endl << "Deck after first perfect shuffle: " << endl;
    shuffledDeck.printDeck();
    cout << endl << "Final Deck: " << endl;
    shuffledDeck.printDeck();
    cout << endl << "Number of perfect shuffles to return to original configuration: " << shuffleCount << endl;





    return 0;
}