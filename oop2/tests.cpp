#include "gtest/gtest.h"
#include "functions.h"

TEST(hashtag, input1)
{
    EXPECT_EQ(add_hashtag("vasya pupkin"),"#VasyaPupkin");
}

TEST(hashtag, input2)
{
    EXPECT_EQ(add_hashtag("   zdarova nadoel   "),"#ZdarovaNadoel");
}

TEST(hashtag, input3)
{
    EXPECT_EQ(add_hashtag("spider    man"),"#SpiderMan");
}