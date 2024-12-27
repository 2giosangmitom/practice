#include <cstdint>
#include <vector>
using namespace std;

class Solution {
public:
  int maxProfit(vector<int> &prices) {
    int32_t buyDay = 0;
    int max_profit = 0;
    for (size_t i = 1; i < prices.size(); i++) {
      if (prices[i] < prices[buyDay]) {
        buyDay = i;
      }
      max_profit = max(max_profit, prices[i] - prices[buyDay]);
    }
    return max_profit;
  }
};
