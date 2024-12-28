#include "../src/best_time_to_buy_and_sell_stock.hpp"
#include <gtest/gtest.h>

class BestTimeToBuyAndSellStock : public ::testing::Test {
protected:
  Solution solution;
};

TEST_F(BestTimeToBuyAndSellStock, case1) {
  vector<int> prices = {7, 1, 5, 3, 6, 4};
  int expected = 5;
  int actual = solution.maxProfit(prices);
  EXPECT_EQ(actual, expected);
}

TEST_F(BestTimeToBuyAndSellStock, case2) {
  vector<int32_t> prices = {7, 6, 4, 3, 1};
  int32_t expected = 0;
  int actual = solution.maxProfit(prices);
  EXPECT_EQ(actual, expected);
}
