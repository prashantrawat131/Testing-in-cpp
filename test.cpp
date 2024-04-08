#include <gtest/gtest.h>
#include "program.h"

TEST(HelloTest, BasicAssertions)
{
    // Tests factorial of 0.
    EXPECT_EQ(1, factorial(0)) << "Test passed";

    EXPECT_EQ(24, factorial(4)) << "Test passed";

    // This test is expected to fail
    EXPECT_EQ(21, factorial(4)) << "factorial(4) is 24, not 21";
}

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}