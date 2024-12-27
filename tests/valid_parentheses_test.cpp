#include <gtest/gtest.h>
#include <valid_parentheses.hpp>
using namespace std;

class ValidParenthesesTest : public ::testing::Test {
protected:
  Solution solution;
};

TEST_F(ValidParenthesesTest, valid_simple_parentheses) {
  string s = "()";
  EXPECT_TRUE(solution.isValid(s));
}

TEST_F(ValidParenthesesTest, valid_multiple_types) {
  string s = "()[]{}";
  EXPECT_TRUE(solution.isValid(s));
}

TEST_F(ValidParenthesesTest, invalid_mixed_parentheses) {
  string s = "(]";
  EXPECT_FALSE(solution.isValid(s));
}

TEST_F(ValidParenthesesTest, valid_nested_parentheses) {
  string s = "([])";
  EXPECT_TRUE(solution.isValid(s));
}

TEST_F(ValidParenthesesTest, invalid_nested_parentheses) {
  string s = "([}}])";
  EXPECT_FALSE(solution.isValid(s));
}

TEST_F(ValidParenthesesTest, invalid_single_opening_bracket) {
  string s = "(";
  EXPECT_FALSE(solution.isValid(s));
}

TEST_F(ValidParenthesesTest, invalid_single_closing_bracket) {
  string s = ")";
  EXPECT_FALSE(solution.isValid(s));
}