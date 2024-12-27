#include <add_two_integers.hpp>
#include <gtest/gtest.h>

class AddTwoIntegersTest : public ::testing::Test {
protected:
  Solution solution;
};

TEST_F(AddTwoIntegersTest, case1) { EXPECT_EQ(solution.sum(1, 2), 3); }

TEST_F(AddTwoIntegersTest, case2) { EXPECT_EQ(solution.sum(1, 4), 5); }

TEST_F(AddTwoIntegersTest, case3) { EXPECT_EQ(solution.sum(100, 200), 300); }

TEST_F(AddTwoIntegersTest, case4) { EXPECT_EQ(solution.sum(125, 5), 130); }