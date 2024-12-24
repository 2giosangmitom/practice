#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
  vector<int> twoSum(vector<int> &nums, int target) {
    unordered_map<int, int> hashMap;
    for (int i = 0; i < (int)nums.size(); i++) {
      int remainder = target - nums[i];
      if (hashMap.find(remainder) != hashMap.end()) {
        return vector<int>{hashMap[remainder], i};
      }

      hashMap[nums[i]] = i;
    }
    return vector<int>{};
  };
};
