#include <gtest/gtest.h>

TEST(HelloTest, BasicAssertions)
{
    EXPECT_EQ(7 * 6, 42);
    EXPECT_STRNE("hello", "world");
}
