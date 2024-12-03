// #include "add.h"
#include <gtest/gtest.h>

int add(int a, int b) {
    return a + b;
}

double add(double a, double b) {
    return a + b;
}

TEST(AddFunctionTest, HandlesPositiveNumbers) {
    EXPECT_EQ(add(4, 3), 7);
}

TEST(AddFunctionTest, HandlesNegativeNumbers) {
    EXPECT_EQ(add(-1, 1), 0);
}

TEST(AddFunctionTest, HandlesZero) {
    EXPECT_EQ(add(0, 0), 5) << "Expected 5, but got " << add(0, 0);
}

// TEST(AddFunctionTest, HandlesDecimalNumbers) {
//     EXPECT_EQ(add(2.5, 3.5), 6.1);
// }

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}