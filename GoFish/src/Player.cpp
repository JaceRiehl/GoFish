#include "Player.h"

Player::Player(int pN)
{
    playerNumber = pN;
}

void Player::addToHand(vector<Card> c)
{
    //currentHand += c;
    sortHand();
}

vector<Card> Player::takeFromHand(Card c)
{
    vector<Card> ret;
    for(int i=0;i<currentHand.size();i++)
    {
        if(c == currentHand[i])
            ret.push_back(currentHand[i]);
    }
    return ret;
}

bool Player::checkMatchingPairs()
{
    return true;
}

void Player::sortHand()
{
    //sort(currentHand.begin(), currentHand.end());
}


