#include "../src/remove_dups_from_sorted_array2.hpp"
#include <gtest/gtest.h>

class RemoveDupsFromSortedArray2 : public ::testing::Test {
protected:
  Solution solution;
  void check(vector<int> &nums, const vector<int> &want, int k) {
    int actual = solution.removeDuplicates(nums);
    vector<int> after = {nums.begin(), nums.end() - (nums.size() - k)};
    EXPECT_EQ(actual, k);
    EXPECT_EQ(after, want);
  }
};

TEST_F(RemoveDupsFromSortedArray2, case1) {
  vector<int> nums = {1, 1, 1, 2, 2, 3};
  const vector<int> want = {1, 1, 2, 2, 3};
  int k = 5;
  check(nums, want, k);
}

TEST_F(RemoveDupsFromSortedArray2, case2) {
  vector<int> nums = {0, 0, 1, 1, 1, 1, 2, 3, 3};
  const vector<int> want = {0, 0, 1, 1, 2, 3, 3};
  int k = 7;
  check(nums, want, k);
}
