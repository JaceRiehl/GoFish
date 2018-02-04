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
    for(int i=0; i<vector_size;i++)
        currentHand.push_back(c[i]);
    //sortHand();
}

Card Player::takeFromHand(Card c)
{
    for(int i = 0; i<currentHand.size();i++)
    {
        if(c == currentHand[i])
        {
            Card cR = currentHand[i];
            currentHand.erase(currentHand.begin()+i);
            return cR;
        }
    }
    return Card("NULL", "NULL");

}
    /*
    vector<int> er;
    vector<Card> ret;
    vector<Card> newVec;
    for(int i=0;i<currentHand.size();i++)
    {
        if(c == currentHand[i])
            ret.push_back(currentHand[i]);
            er.push_back(i);
    }
    for(int j=0;j<currentHand.size()){
        for(int i=0;i<er.size();i++){
            if(j == )
        }
    }
    return ret;
    */


bool Player::checkMatchingPairs()
{
    sortHand();
    int numMatched;
    for(int i=0;i<currentHand.size();i++)
    {
        numMatched = 0;
        for(int j=i+1;j<currentHand.size();j++){
            if(currentHand[i].getFace() == currentHand[j].getFace())
            {
                numMatched +=1;
            }
            if(numMatched == 3)
            {
                matchingPairs += 1;
                for(int k=i;k<=j;k++)
                    matchingPairsInHand.push_back(currentHand[k]);
                currentHand.erase(currentHand.begin()+i,currentHand.begin()+i+4);
                /*
                for(int k=0;k<currentHand.size();k++)
                    cout << "Member of hand: " << currentHand[k].getFace() << " " << currentHand[k].getSuit() << " " << endl;;
                cout << endl;
                for(int k=0;k<matchingPairsInHand.size();k++)
                    cout << "Member of matching: " << matchingPairsInHand[k].getFace() << " " << matchingPairsInHand[k].getSuit() << " " << endl;;
                cout << endl;
                */
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

