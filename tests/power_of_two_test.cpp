#include <gtest/gtest.h>
#include <power_of_two.hpp>

class PowerOfTwoTest : public ::testing::Test {
protected:
  Solution solution;
};

TEST_F(PowerOfTwoTest, case1) {
  int n = 16;
  EXPECT_TRUE(solution.isPowerOfTwo(n));
}

TEST_F(PowerOfTwoTest, case2) {
  int n = 1;
  EXPECT_TRUE(solution.isPowerOfTwo(n));
}

TEST_F(PowerOfTwoTest, case3) {
  int n = 6;
  EXPECT_FALSE(solution.isPowerOfTwo(n));
}

TEST_F(PowerOfTwoTest, case4) {
  int n = 3;
  EXPECT_FALSE(solution.isPowerOfTwo(n));
}

TEST_F(PowerOfTwoTest, case5) {
  int n = 0;
  EXPECT_FALSE(solution.isPowerOfTwo(n));
}

TEST_F(PowerOfTwoTest, case6) {
  int n = -16;
  EXPECT_FALSE(solution.isPowerOfTwo(n));
}
