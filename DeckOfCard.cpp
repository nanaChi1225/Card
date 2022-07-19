

#include "DeckOfCard.hpp"
#include <cstdlib>
#include <ctime>
using namespace std;

DeckOfCards :: DeckOfCards(){
    
    currentCard = 0;
    
    for(int i=0; i < Card :: totalFaces*Card :: totalSuits; i++){
        Card card(i%Card :: totalFaces, i/Card :: totalFaces);
        deck.push_back(card);
    }
}

void DeckOfCards :: shuffle(){
    srand((unsigned)time(0));
    currentCard = 0;
    for(int i=0; i < Card :: totalFaces*Card :: totalSuits; i++){
        int j = rand()%deck.size();
        Card k = deck[i];
        deck[i] = deck[j];
        deck[j] = k;
        
    }
}

Card DeckOfCards::dealCard(){
    return deck[currentCard++];
}

bool DeckOfCards :: moreCards() const{
    return currentCard < deck.size();
}
