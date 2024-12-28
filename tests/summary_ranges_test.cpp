#include "../src/summary_ranges.hpp"
#include <gtest/gtest.h>

class SummaryRangeTest : public ::testing::Test {
protected:
  Solution solution;
};

TEST_F(SummaryRangeTest, case1) {
  vector<int> nums = {0, 1, 2, 4, 5, 7};
  vector<string> expected = {"0->2", "4->5", "7"};
  vector<string> actual = solution.summaryRanges(nums);
  EXPECT_EQ(actual, expected);
}

TEST_F(SummaryRangeTest, case2) {
  vector<int> nums = {0, 2, 3, 4, 6, 8, 9};
  vector<string> expected = {"0", "2->4", "6", "8->9"};
  vector<string> actual = solution.summaryRanges(nums);
  EXPECT_EQ(actual, expected);
}
