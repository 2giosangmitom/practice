#include <algorithm>
#include <vector>
using namespace std;

class Solution {
public:
  int singleNumber(vector<int> &nums) {
    int result = 0;
    for (size_t i = 0; i < nums.size(); i++) {
      result = result ^ nums[i];
    }
    return result;
  };

  int singleNumber2(vector<int> &nums) {
    sort(nums.begin(), nums.end());
    for (size_t i = 1; i < nums.size(); i += 2) {
      if (nums[i] != nums[i - 1]) {
        return nums[i - 1];
      }
    }
    return nums[nums.size() - 1];
  };
};
