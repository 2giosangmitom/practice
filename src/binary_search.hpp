#include <vector>
using namespace std;

class Solution {
public:
  int search(const vector<int> &nums, int target) {
    int left = 0;
    int right = nums.size() - 1;

    while (left <= right) {
      int middle = (right - left) / 2 + left;

      if (nums[middle] == target) {
        return middle;
      }

      if (nums[middle] < target) {
        left = middle + 1;
      } else {
        right = middle - 1;
      }
    }

    return -1;
  };
};
