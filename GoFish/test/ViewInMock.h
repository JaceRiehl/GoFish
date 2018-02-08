#ifndef VIEWINMOCK_H
#define VIEWINMOCK_H
#include "ViewIn.h"
#include "gmock/gmock.h"

class ViewInMock : public ViewIn
{
    public:
        MOCK_METHOD2(choosePlayer,int(int numPlayers,int playerNum));
        MOCK_METHOD0(chooseNumPlayers,int());
        MOCK_METHOD1(chooseCard,int(int maxCard));

    protected:

    private:
};

#endif // VIEWINMOCK_H
