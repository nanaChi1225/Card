

#ifndef Hand_hpp
#define Hand_hpp

#include <stdio.h>
#include <string>
#include <vector>
#include "Card.hpp"
#include "DeckOfCard.hpp"
using namespace std;

class Hand
{
public:
   // constructor takes 5 cards from Deck
   Hand( DeckOfCards &deck );
   void print() const; // display hand

   // determine if we have the given scoring hand
   bool pair() const;
   bool twoPair() const;
   bool threeOfAKind() const;
   bool fourOfAKind() const;
   bool flush() const;
   bool straight() const;
private:
   vector< Card > hand; // our hand
   vector< int > faceCount; // number of each face
}; // end class Hand
#endif /* Hand_hpp */
