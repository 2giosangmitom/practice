#include <algorithm>
#include <gtest/gtest.h>
#include <remove_element.hpp>

class RemoveElementTest : public ::testing::Test {
protected:
  Solution solution;
};

TEST_F(RemoveElementTest, continuous_occurrences) {
  vector<int> nums = {3, 2, 2, 3};
  vector<int> want = {2, 2};
  int val = 3;

  int result = solution.removeElement(nums, val);
  ASSERT_EQ(result, 2);
  ASSERT_EQ(nums.size(), 4);
  nums.pop_back();
  nums.pop_back();
  sort(nums.begin(), nums.end());
  ASSERT_EQ(nums, want);
}

TEST_F(RemoveElementTest, multiple_occurrences) {
  vector<int> nums = {0, 1, 2, 2, 3, 0, 4, 2};
  vector<int> want = {0, 0, 1, 3, 4};
  int val = 2;

  int result = solution.removeElement(nums, val);
  ASSERT_EQ(result, 5);
  nums.pop_back();
  nums.pop_back();
  nums.pop_back();
  sort(nums.begin(), nums.end());
  ASSERT_EQ(nums.size(), want.size());
}

TEST_F(RemoveElementTest, no_occurrences) {
  vector<int> nums = {1, 2, 3, 4, 5};
  vector<int> want = {1, 2, 3, 4, 5};
  int val = 6;

  int result = solution.removeElement(nums, val);
  ASSERT_EQ(result, 5);
  ASSERT_EQ(nums, want);
}

TEST_F(RemoveElementTest, all_occurrences) {
  vector<int> nums = {2, 2, 2, 2};
  vector<int> want = {};
  int val = 2;

  int result = solution.removeElement(nums, val);
  ASSERT_EQ(result, 0);
  ASSERT_EQ(nums.size(), 4);
  nums.clear();
  ASSERT_EQ(nums, want);
}

TEST_F(RemoveElementTest, mixed_occurrences) {
  vector<int> nums = {4, 5, 4, 6, 4, 7};
  vector<int> want = {5, 6, 7};
  int val = 4;

  int result = solution.removeElement(nums, val);
  ASSERT_EQ(result, 3);
  nums.pop_back();
  nums.pop_back();
  nums.pop_back();
  sort(nums.begin(), nums.end());
  ASSERT_EQ(nums, want);
}