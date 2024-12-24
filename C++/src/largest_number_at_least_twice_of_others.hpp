#include <vector>
using namespace std;

class Solution {
public:
  int dominantIndex(const vector<int> &nums) {
    if (nums.empty()) {
      return -1;
    }
    int max_num_idx = 0;
    int max_num = nums[0];
    int second_max = -1;
    for (size_t i = 0; i < nums.size(); i++) {
      if (nums[i] > max_num) {
        second_max = max_num;
        max_num = nums[i];
        max_num_idx = i;
      } else if (nums[i] > second_max && nums[i] < max_num) {
        second_max = nums[i];
      }
    }
    return second_max * 2 <= max_num ? max_num_idx : -1;
  };
};
