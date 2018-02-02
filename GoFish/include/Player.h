#ifndef PLAYER_H
#define PLAYER_H
#include <vector>
#include "Card.h"
using namespace std;
class Player
{
    public:
        Player(int pN);
        ~Player();

    protected:

    private:
        int playerNumber;
        int matchingPairs = 0;
        vector<Card> currentHand;
};

#endif // PLAYER_H
