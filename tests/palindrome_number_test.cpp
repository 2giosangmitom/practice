#include "../src/palindrome_number.hpp"
#include <gtest/gtest.h>

class PalindromeTest : public ::testing::Test {
protected:
  Solution solution;
};

TEST_F(PalindromeTest, positive_palindrome) {
  int x = 121;

  bool actual = solution.isPalindrome(x);
  EXPECT_TRUE(actual);
}

TEST_F(PalindromeTest, negative_palindrome) {
  int x = -121;

  bool actual = solution.isPalindrome(x);
  EXPECT_FALSE(actual);
}

TEST_F(PalindromeTest, not_palindrome_ending_in_zero) {
  int x = 10;

  bool actual = solution.isPalindrome(x);
  EXPECT_FALSE(actual);
}

TEST_F(PalindromeTest, not_palindrome_large_number) {
  int x = 1234567899;

  bool actual = solution.isPalindrome(x);
  EXPECT_FALSE(actual);
}
