#include "../src/count_odd.hpp"
#include <gtest/gtest.h>

class CountOddTest : public ::testing::Test {
protected:
  Solution solution;
};

TEST_F(CountOddTest, BasicCase) { EXPECT_EQ(solution.countOdds(3, 7), 3); }

TEST_F(CountOddTest, SingleOddNumber) {
  EXPECT_EQ(solution.countOdds(5, 5), 1);
}

TEST_F(CountOddTest, SingleEvenNumber) {
  EXPECT_EQ(solution.countOdds(4, 4), 0);
}

TEST_F(CountOddTest, MixedOddAndEven) {
  EXPECT_EQ(solution.countOdds(4, 8), 2);
}

TEST_F(CountOddTest, LargeRange) {
  EXPECT_EQ(solution.countOdds(1, 1000000), 500000);
}

TEST_F(CountOddTest, NegativeRange) { EXPECT_EQ(solution.countOdds(-5, 5), 6); }

TEST_F(CountOddTest, ZeroRange) { EXPECT_EQ(solution.countOdds(0, 0), 0); }

TEST_F(CountOddTest, EvenStartAndEnd) {
  EXPECT_EQ(solution.countOdds(2, 10), 4);
}
