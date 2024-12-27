#include <string>
#include <vector>
using namespace std;

class Solution {
public:
  string longestCommonPrefix(const vector<string> &strs) {
    string longestPrefix = strs.empty() ? "" : strs[0];

    for (size_t i = 1; i < strs.size(); i++) {
      while (strs[i].find(longestPrefix) != 0) {
        longestPrefix.pop_back();
        if (longestPrefix.empty()) {
          return "";
        }
      }
    }

    return longestPrefix;
  };
};
