#include "../src/missing_number.hpp"
#include <gtest/gtest.h>
#include <vector>

class MissingNumberTest : public ::testing::Test {
protected:
  Solution solution;
};

TEST_F(MissingNumberTest, case1) {
  vector<int> nums = {3, 0, 1};
  int expected = 2;
  int actual = solution.missingNumber(nums);
  EXPECT_EQ(actual, expected);
}

TEST_F(MissingNumberTest, case2) {
  vector<int> nums = {3, 0, 1, 4, 5};
  int expected = 2;
  int actual = solution.missingNumber(nums);
  EXPECT_EQ(actual, expected);
}

TEST_F(MissingNumberTest, case3) {
  vector<int> nums = {9, 6, 4, 2, 3, 5, 7, 0, 1};
  int expected = 8;
  int actual = solution.missingNumber(nums);
  EXPECT_EQ(actual, expected);
}
