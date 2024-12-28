#include "../src/water_bottles.hpp"
#include <gtest/gtest.h>

class WaterBottlesTest : public ::testing::Test {
protected:
  Solution solution;
};

TEST_F(WaterBottlesTest, case1) {
  int actual = solution.numWaterBottles(9, 3);
  int expected = 13;
  EXPECT_EQ(actual, expected);
}

TEST_F(WaterBottlesTest, case2) {
  int actual = solution.numWaterBottles(15, 4);
  int expected = 19;
  EXPECT_EQ(actual, expected);
}
