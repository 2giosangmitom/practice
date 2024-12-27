#include <algorithm>
#include <group_anagrams.hpp>
#include <gtest/gtest.h>
#include <string>
#include <vector>

using namespace std;

class GroupAnagramsTest : public ::testing::Test {
protected:
  Solution solution;

  void check_equal(const vector<vector<string>> &result,
                   const vector<vector<string>> &want) {
    auto sort_groups = [](auto &vec) {
      for (auto &group : vec) {
        sort(group.begin(), group.end());
      }
      sort(vec.begin(), vec.end());
    };

    auto result_copy = result;
    auto want_copy = want;

    sort_groups(result_copy);
    sort_groups(want_copy);

    ASSERT_EQ(result_copy, want_copy);
  }
};

TEST_F(GroupAnagramsTest, same_length) {
  vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
  vector<vector<string>> want = {
      {"bat"}, {"nat", "tan"}, {"ate", "eat", "tea"}};
  check_equal(solution.groupAnagrams(strs), want);
}

TEST_F(GroupAnagramsTest, empty_string) {
  check_equal(solution.groupAnagrams({""}), {{""}});
}

TEST_F(GroupAnagramsTest, single_character_strings) {
  check_equal(solution.groupAnagrams({"a", "b", "a"}), {{"a", "a"}, {"b"}});
}

TEST_F(GroupAnagramsTest, mixed_case_strings) {
  check_equal(solution.groupAnagrams({"a", "A"}), {{"a"}, {"A"}});
}

TEST_F(GroupAnagramsTest, no_anagrams) {
  check_equal(solution.groupAnagrams({"abc", "def", "ghi"}),
              {{"abc"}, {"def"}, {"ghi"}});
}

TEST_F(GroupAnagramsTest, all_anagrams) {
  check_equal(solution.groupAnagrams({"abc", "bca", "cab"}),
              {{"abc", "bca", "cab"}});
}
