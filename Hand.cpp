

#include "Hand.hpp"
#include <iostream>

using namespace std;

Hand :: Hand( DeckOfCards &deck ) : faceCount(Card :: totalFaces){
    
    for(int i=0; i<5; i++){
        hand.push_back(deck.dealCard());
    }
    for(int i=0; i<5; i++){
        ++faceCount[hand[i].getFace()];
    }
}

void Hand :: print() const{
    cout << "Hand is\n";
    for(int i=0; i<5; i++){
        cout << hand[i].toString() << endl;
    }
    cout << endl;
}

bool Hand :: pair() const{
    for (int i=0; i<5; i++){
        if(faceCount[i]==2){
            return true;
        }
    }
    return false;
}

bool Hand ::twoPair() const{
    bool first=false;
    for (int i=0; i<5; i++){
        if(faceCount[i]==2 && first){
            return true;
        }
        else if(faceCount[i]==2){
            first=true;
        }
    }
    return false;
}

bool Hand ::threeOfAKind() const{
    for (int i=0; i<5; i++){
        if(faceCount[i]==3){
            return true;
        }
    }
    return false;
}

bool Hand ::fourOfAKind() const{
    for (int i=0; i<5; i++){
        if(faceCount[i]==4){
            return true;
        }
    }
    return false;
}

bool Hand ::flush() const{
    int s=hand[0].getSuit();
    for (int i=1; i<5; i++){
        if(hand[i].getSuit()!= s){
            return false;
        }
    }
    return true;
}

bool Hand ::straight() const{
    vector<int> t=faceCount;
    t.push_back(t[0]);
    
    if (t[0] == 1 && t[1] == 1 && t[2] == 1 && t[3] == 1 && t[4] == 1) {
      return true;
   }
   
   int i=1;
   while(i<t.size() && t[i] == 0){
           i++;
   }
    
    int str=i;
   
   while(i<t.size() && t[i] == 1 ){
           i++;
   }
   
   return i== str+5;
}
