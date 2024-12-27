#include <binary_search.hpp>
#include <gtest/gtest.h>

class BinarySearchTest : public ::testing::Test {
protected:
  Solution solution;
};

TEST_F(BinarySearchTest, positive_numbers) {
  vector<int> nums = {0, 3, 5, 9, 12};
  int target = 9;
  int expected = 3;
  int result = solution.search(nums, target);
  ASSERT_EQ(result, expected);
}

TEST_F(BinarySearchTest, negative_numbers) {
  vector<int> nums = {-12, -9, -5, -3, 0};
  int target = -9;
  int expected = 1;
  int result = solution.search(nums, target);
  ASSERT_EQ(result, expected);
}

TEST_F(BinarySearchTest, mixed_numbers) {
  vector<int> nums = {-12, -9, 0, 3, 5, 9, 12};
  int target = 0;
  int expected = 2;
  int result = solution.search(nums, target);
  ASSERT_EQ(result, expected);
}