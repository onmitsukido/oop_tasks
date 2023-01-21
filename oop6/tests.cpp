#include "gtest\gtest.h"
#include "functions.h"

TEST(rpn, input1)
{
    EXPECT_EQ(func("5 2 + 3 4 + *"), 49);
}

TEST(rpn, input2)
{
    EXPECT_EQ(func("2 3 + 9 + 8 1 + *"), 126);
}

TEST(rpn, input3)
{
    EXPECT_EQ(func("9 1 + 8 2 + *"), 100);
}