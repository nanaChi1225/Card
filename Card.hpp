

#ifndef Card_hpp
#define Card_hpp

#include <stdio.h>
#include <string>
using namespace std;

class Card
{
public:
   static const int totalFaces = 13; // total number of faces
   static const int totalSuits = 4; // total number of suits

   Card( int cardFace, int cardSuit ); // initialize face and suit
   string toString() const; // returns a string representation of a Card

   // get the card's face
   int getFace() const
   {
      return face;
   } // end function getFace

   // get the card's suit
   int getSuit() const
   {
      return suit;
   } // end function getSuit
private:
   int face;
   int suit;

   static const string faceNames[ totalFaces ];
   static const string suitNames[ totalSuits ];
}; // end class Card

#endif /* Card_hpp */
