#include <gtest/gtest.h>

#include "add.h"


TEST(AddFunctionTest, HandlesPositiveNumbers) {
    EXPECT_EQ(add(4, 3), 7);
}

TEST(AddFunctionTest, HandlesNegativeNumbers) {
    EXPECT_EQ(add(-1, 1), 0) << "-1 + 1 is not 0?";
}

TEST(AddFunctionTest, HandlesZero) {
    EXPECT_EQ(add(0, 0), 0) << "Expected 5, but got " << add(0, 0);
}

TEST(AddFunctionTest, HandlesDecimalNumbers) {
    EXPECT_DOUBLE_EQ(add(2.5, 3.5), 6.0);
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}