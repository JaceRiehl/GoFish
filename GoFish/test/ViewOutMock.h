#ifndef VIEWOUTMOCK_H
#define VIEWOUTMOCK_H
#inlcude "ViewIn.h"
#include "gmock/gmock.h"
#include "Player.h"
#include <vector>
class ViewOutMock : public ViewOut
{
    public:
        MOCK_METHOD0(welcomeMessage, void());
        MOCK_METHOD1(coutDisplayPlayersHand,void(vector<Card> playersHand));
        MOCK_METHOD1(goFish,void(bool canGoFish));
        MOCK_METHOD1(displayTurn,void(Player p1));
        MOCK_METHOD0(endTurn,void());
        MOCK_METHOD0(clearTerminal,void());
        MOCK_METHOD1(endingMessage,void(int winner));
    protected:

    private:
};

#endif // VIEWOUTMOCK_H
