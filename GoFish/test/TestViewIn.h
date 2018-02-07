#ifndef TESTVIEWIN_H
#define TESTVIEWIN_H
#include "gtest/gtest.h"
#include "ViewIn.h"
#include <vector>

class TestViewIn : public ::testing::Test
{
    public:
        virtual void SetUp()
        {
            vI = new ViewIn();
        }

        virtual void TearDown()
        {
            delete vI;
        }
    protected:
        ViewIn* vI;
    private:

};

#endif // TESTVIEWIN_H
