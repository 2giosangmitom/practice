#include "../src/stone_removal_game.hpp"
#include <gtest/gtest.h>

class StoneRemovalGameTest : public ::testing::Test {
protected:
  Solution solution;
};

TEST_F(StoneRemovalGameTest, case1) { EXPECT_TRUE(solution.canAliceWin(12)); }
TEST_F(StoneRemovalGameTest, case2) { EXPECT_FALSE(solution.canAliceWin(1)); }
TEST_F(StoneRemovalGameTest, case3) { EXPECT_TRUE(solution.canAliceWin(10)); }
