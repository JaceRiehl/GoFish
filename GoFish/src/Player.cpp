#include "Player.h"

bool sortBy(Card, Card);

Player::Player(int pN)
{
    playerNumber = pN;
}

int Player::getPlayerNumber()
{
    return playerNumber;
}
int Player::getNumMatches()
{
    return matchingPairs;
}

void Player::addToHand(vector<Card> c)
{
    int vector_size = c.size();
    if(vector_size >= 1)
    {
    for(int i=0; i<vector_size;i++)
        currentHand.push_back(c[i]);
    }
}
bool Player::checkIfInHand(Card c)
{
    for(int i = 0; i<(int)currentHand.size();i++)
    {
        if(c.getFace() == currentHand[i].getFace())
        {
            return true;
        }
    }
    return false;
}
Card Player::takeFromHand(Card c)
{
    for(unsigned int i = 0; i<currentHand.size();i++)
    {
        if(c.getFace() == currentHand[i].getFace())
        {
            Card cR = currentHand[i];
            currentHand.erase(currentHand.begin()+i);
            return cR;
        }
    }
    Card ret("NULL","NULL");
    return ret;

}

bool Player::checkMatchingPairs()
{
    sortHand();
    for(unsigned int i=0;i<currentHand.size();i++)
    {
        int numMatched = 0;
        for(unsigned int j=i+1;j<currentHand.size();j++){
            if(currentHand[i].getFace() == currentHand[j].getFace())
            {
                numMatched +=1;
            }
            if(numMatched == 3)
            {
                matchingPairs += 1;
                for(unsigned int k=i;k<=j;k++)
                    matchingPairsInHand.push_back(currentHand[k]);
                currentHand.erase(currentHand.begin()+i,currentHand.begin()+i+4);
                return true;
            }
        }
    }
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
vector<Card> Player::getMatchedHand()
{
    return matchingPairsInHand;
}
int Player::getNumCards()
{
    return currentHand.size();
}

