#include <gtest/gtest.h>
#include <longest_common_prefix.hpp>
using namespace std;

class LongestCommonPrefixTest : public ::testing::Test {
protected:
  Solution solution;
};

TEST_F(LongestCommonPrefixTest, common_prefix_exists) {
  vector<string> strs = {"flower", "flow", "flight"};
  string want = "fl";

  string actual = solution.longestCommonPrefix(strs);
  EXPECT_EQ(actual, want);
}

TEST_F(LongestCommonPrefixTest, no_common_prefix) {
  vector<string> strs = {"dog", "racecar", "car"};
  string want = "";

  string actual = solution.longestCommonPrefix(strs);
  EXPECT_EQ(actual, want);
}

TEST_F(LongestCommonPrefixTest, single_string) {
  vector<string> strs = {"alone"};
  string want = "alone";

  string actual = solution.longestCommonPrefix(strs);
  EXPECT_EQ(actual, want);
}

TEST_F(LongestCommonPrefixTest, no_common_prefix_at_all) {
  vector<string> strs = {"abc", "def", "ghi"};
  string want = "";

  string actual = solution.longestCommonPrefix(strs);
  EXPECT_EQ(actual, want);
}

TEST_F(LongestCommonPrefixTest, same_strings) {
  vector<string> strs = {"same", "same", "same"};
  string want = "same";

  string actual = solution.longestCommonPrefix(strs);
  EXPECT_EQ(actual, want);
}

TEST_F(LongestCommonPrefixTest, prefix_is_the_shortest_string) {
  vector<string> strs = {"ab", "abc", "abcd"};
  string want = "ab";

  string actual = solution.longestCommonPrefix(strs);
  EXPECT_EQ(actual, want);
}

TEST_F(LongestCommonPrefixTest, empty_vector) {
  vector<string> strs = {};
  string want = "";

  string actual = solution.longestCommonPrefix(strs);
  EXPECT_EQ(actual, want);
}