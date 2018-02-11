#ifndef DECKMOCK_H
#define DECKMOCK_H
#include "Deck.h"
#include "Card.h"
#include "gmock/gmock.h"
//using namespace ::testing;
class DeckMock : public Deck
{
    public:
        //explicit DeckMock(){}
        MOCK_METHOD0(shuffleDeck, void());
        MOCK_METHOD0(getDeck, vector<Card>());
        MOCK_METHOD0(dealCard, Card());
        MOCK_METHOD0(getDeckSize,int());

    protected:

    private:
};

#endif // DECKMOCK_H
