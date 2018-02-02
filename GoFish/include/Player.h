#ifndef PLAYER_H
#define PLAYER_H
#include <vector>
#include "Card.h"
#include <algorithm>
using namespace std;
class Player
{
    public:
        Player(int pN);
        ~Player();
        void addToHand(vector<Card> c);
        vector<Card> takeFromHand(Card);
        bool checkMatchingPairs();



    protected:

    private:
        void sortHand();
        int playerNumber;
        int matchingPairs = 0;
        vector<Card> currentHand;
};

#endif // PLAYER_H
