

#include "Card.hpp"
using namespace std;

const string Card :: faceNames[totalFaces]={
    "Ace", "Deuce", "Three", "Four", "Five", "Six",
    "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King"
};
const string Card :: suitNames[totalSuits]={
    "Hearts", "Diamonds", "Clubs", "Spades"
};
Card :: Card( int cardFace, int cardSuit ){
    face=cardFace;
    suit=cardSuit;
}
string Card :: toString() const{
    return faceNames[face] + " of " + suitNames[suit];
}
