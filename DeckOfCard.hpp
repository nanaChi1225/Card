

#ifndef DeckOfCard_hpp
#define DeckOfCard_hpp

#include <stdio.h>
#include <vector>
#include "Card.hpp"
using namespace std;

// DeckOfCards class definition
class DeckOfCards
{
public:
   DeckOfCards(); // constructor initializes deck
   void shuffle(); // shuffles cards in deck
   Card dealCard(); // deals cards in deck
   bool moreCards() const; // are there any more cards left
private:
   vector< Card > deck; // represents deck of cards
   unsigned currentCard; // index of next card to be dealt
}; // end class DeckOfCards

#endif /* DeckOfCard_hpp */
