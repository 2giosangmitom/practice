#include <algorithm>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
  vector<vector<string>> groupAnagrams(const vector<string> &strs) {
    unordered_map<string, vector<string>> hash_map;

    for (auto &s : strs) {
      string word = s;
      sort(word.begin(), word.end());
      hash_map[word].push_back(std::move(s));
    }

    vector<vector<string>> result;
    for (auto &[key, value] : hash_map) {
      result.push_back(std::move(value));
    }

    return result;
  }
};
