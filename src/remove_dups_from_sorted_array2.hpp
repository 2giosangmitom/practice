#include <vector>
using namespace std;

class Solution {
public:
  int removeDuplicates(vector<int> &nums) {
    int k = 0;

    int length = nums.size();
    int count = 0;
    int prev = nums[0];
    for (int i = 0; i < length; i++) {
      if (prev == nums[i]) {
        count++;
      } else {
        count = 1;
        prev = nums[i];
      }
      if (count <= 2) {
        nums[k] = nums[i];
        k++;
      }
    }

    return k;
  }
};
