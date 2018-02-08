#ifndef PLAYERMOCK_H
#define PLAYERMOCK_H
#include "Player.h"
#include "Card.h"
#include "gmock/gmock.h"
//
class PlayerMock : public Player
{
    public:
        PlayerMock(int pN): Player(pN){}
        MOCK_METHOD0(getPlayerNumber, int());
        MOCK_METHOD0(getNumMatches, int());
        MOCK_METHOD0(getNumCards, int());
        MOCK_METHOD1(addToHand,void(vector<Card> c));
        MOCK_METHOD1(takeFromHand,Card(Card));
        MOCK_METHOD1(checkIfInHand,bool(Card));
        MOCK_METHOD0(checkMatchingPairs, bool());
        MOCK_METHOD0(getHand,vector<Card>());
        MOCK_METHOD0(getMatchedHand,vector<Card>());
        MOCK_METHOD0(shuffleHand,void());
    protected:

    private:
};

#endif // PLAYERMOCK_H
