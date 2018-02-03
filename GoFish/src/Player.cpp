#include "Player.h"

using namespace std;

bool sortBy(Card, Card);

Player::Player(int pN)
{
    playerNumber = pN;
}

int Player::getPlayerNumber()
{
    return playerNumber;
}

void Player::addToHand(vector<Card> c)
{
    for(int i=0; i<c.size();i++)
        currentHand.push_back(c[i]);
    sortHand();
}

vector<Card> Player::takeFromHand(Card c)
{
    vector<int> er;
    vector<Card> ret;
    for(int i=0;i<currentHand.size();i++)
    {
        if(c == currentHand[i])
            ret.push_back(currentHand[i]);
            er.push_back(i);
    }
    for(int i=0;i<er.size();i++)
        currentHand.erase(currentHand.begin()+er[i]);
    return ret;
}

bool Player::checkMatchingPairs()
{
    int numMatched;
    for(int i=0;i<currentHand.size();i++)
    {
        numMatched = 0;
        for(int j=0;j<i;j++)
            if(currentHand[i].getFace() == currentHand[j].getFace())
                numMatched +=1;
    }
    if(numMatched == 3)
    {
        matchingPairs += 1;
        return true;
    }
    else
        return false;

}
bool sortBy(Card c1, Card c2)
{
    string s1 = c1.getFace();
    string s2 = c2.getFace();
    return s1 < s2;
}

void Player::sortHand()
{
    sort(currentHand.begin(), currentHand.end(), sortBy);
}
vector<Card> Player::getHand()
{
    return currentHand;
}

