#include <gtest/gtest.h>
#include <sort_an_array.hpp>
using namespace std;

class SortTest : public ::testing::Test {
protected:
  Solution solution;
};

TEST_F(SortTest, reversed_array) {
  vector<int> nums = {7, 6, 5, 4, 3, 2, 1};
  vector<int> want = {1, 2, 3, 4, 5, 6, 7};

  vector<int> actual = solution.sortArray(nums);
  EXPECT_EQ(actual, want);
}

TEST_F(SortTest, random_order) {
  vector<int> nums = {5, 1, 1, 2, 0, 0, 6, 63, 12, 4};
  vector<int> want = {0, 0, 1, 1, 2, 4, 5, 6, 12, 63};

  vector<int> actual = solution.sortArray(nums);
  EXPECT_EQ(actual, want);
}
