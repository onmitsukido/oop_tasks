#include "gtest/gtest.h"
#include "functions.h"

TEST(base, input1)
{
    EXPECT_EQ(encode("aaa"), "YWFh");
}

TEST(base, input2)
{
    EXPECT_EQ(encode("abc"), "YWJj");
}

TEST(base, input3)
{
    EXPECT_EQ(encode("Cba"), "Q2Jh");
}