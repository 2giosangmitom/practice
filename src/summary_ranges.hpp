#include <sstream>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
  vector<string> summaryRanges(vector<int> &nums) {
    if (nums.empty())
      return {};

    vector<string> result;

    for (int i = 0; i < nums.size(); i++) {
      stringstream ss;
      int end = i;

      while (end + 1 < nums.size() && nums[end + 1] == nums[end] + 1) {
        end++;
      }

      if (end > i) {
        ss << nums[i] << "->" << nums[end];
      } else {
        ss << nums[i];
      }

      i = end;
      result.push_back(ss.str());
    }

    return result;
  }
};
