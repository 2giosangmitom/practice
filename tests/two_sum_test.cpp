#include <gtest/gtest.h>
#include <two_sum.hpp>

class TwoSumTest : public ::testing::Test {
protected:
  Solution solution;
};

TEST_F(TwoSumTest, increasing_order) {
  vector<int> nums = {2, 7, 11, 15};
  int target = 9;
  vector<int> want = {0, 1};

  vector<int> actual = solution.twoSum(nums, target);
  EXPECT_EQ(actual, want);
}

TEST_F(TwoSumTest, different_order) {
  vector<int> nums = {3, 2, 4};
  int target = 6;
  vector<int> want = {1, 2};

  vector<int> actual = solution.twoSum(nums, target);
  EXPECT_EQ(actual, want);
}

TEST_F(TwoSumTest, same_numbers) {
  vector<int> nums = {3, 3};
  int target = 6;
  vector<int> want = {0, 1};

  vector<int> actual = solution.twoSum(nums, target);
  EXPECT_EQ(actual, want);
}

TEST_F(TwoSumTest, no_solution) {
  vector<int> nums = {1, 2, 3};
  int target = 10;
  vector<int> want = {};

  vector<int> actual = solution.twoSum(nums, target);
  EXPECT_EQ(actual, want);
}

TEST_F(TwoSumTest, empty_vector) {
  vector<int> nums = {};
  int target = 10;
  vector<int> want = {};

  vector<int> actual = solution.twoSum(nums, target);
  EXPECT_EQ(actual, want);
}
