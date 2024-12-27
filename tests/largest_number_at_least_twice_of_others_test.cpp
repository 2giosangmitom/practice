#include <gtest/gtest.h>
#include <largest_number_at_least_twice_of_others.hpp>

class LargestNumberAtLeastTwiceOfOthersTest : public ::testing::Test {
protected:
  Solution solution;

  void check_dominant_idx(vector<int> nums, int expected) {
    int actual = solution.dominantIndex(nums);
    EXPECT_EQ(actual, expected);
  }
};

TEST_F(LargestNumberAtLeastTwiceOfOthersTest, AllZerosExceptOneLargeNumber) {
  check_dominant_idx({0, 0, 3, 2}, -1);
}

TEST_F(LargestNumberAtLeastTwiceOfOthersTest, DominantNumberExists) {
  check_dominant_idx({3, 6, 1, 0}, 1);
}

TEST_F(LargestNumberAtLeastTwiceOfOthersTest, NoDominantNumber) {
  check_dominant_idx({1, 2, 3, 4}, -1);
}

TEST_F(LargestNumberAtLeastTwiceOfOthersTest, SingleElement) {
  check_dominant_idx({10}, 0);
}

TEST_F(LargestNumberAtLeastTwiceOfOthersTest, TwoElements_DominantExists) {
  check_dominant_idx({1, 4}, 1);
}

TEST_F(LargestNumberAtLeastTwiceOfOthersTest, TwoElements_NoDominant) {
  check_dominant_idx({2, 3}, -1);
}

TEST_F(LargestNumberAtLeastTwiceOfOthersTest, EmptyArray) {
  check_dominant_idx({}, -1);
}
