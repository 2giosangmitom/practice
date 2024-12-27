#include <gtest/gtest.h>
#include <search_insert_position.hpp>

class SearchInsertPositionTest : public ::testing::Test {
protected:
  Solution solution;
};

TEST_F(SearchInsertPositionTest, target_not_exist) {
  vector<int> nums = {1, 3, 5, 6};
  int target = 4;
  int want = 2;
  int actual = solution.searchInsert(nums, target);
  EXPECT_EQ(actual, want);
}

TEST_F(SearchInsertPositionTest, target_exist) {
  vector<int> nums = {1, 3, 5, 6};
  int target = 5;
  int want = 2;
  int actual = solution.searchInsert(nums, target);
  EXPECT_EQ(actual, want);
}

TEST_F(SearchInsertPositionTest, target_is_the_greatest) {
  vector<int> nums = {1, 3, 5, 6};
  int target = 7;
  int want = 4;
  int actual = solution.searchInsert(nums, target);
  EXPECT_EQ(actual, want);
}
