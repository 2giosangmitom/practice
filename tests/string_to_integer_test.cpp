#include <gtest/gtest.h>
#include <string_to_integer.hpp>

class StringToIntegerTest : public ::testing::Test {
protected:
  Solution solution;
};

TEST_F(StringToIntegerTest, FullDigits) {
  string s = "42";
  int expected = 42;
  int actual = solution.myAtoi(s);
  EXPECT_EQ(actual, expected);
}

TEST_F(StringToIntegerTest, ContainsSign) {
  string s = "   -42";
  int expected = -42;
  int actual = solution.myAtoi(s);
  EXPECT_EQ(actual, expected);
}

TEST_F(StringToIntegerTest, ContainsLeadingZeros) {
  string s = "   0000-42";
  int expected = 0;
  int actual = solution.myAtoi(s);
  EXPECT_EQ(actual, expected);
}

TEST_F(StringToIntegerTest, MixedWithChars) {
  string s = "1337c0d3";
  int expected = 1337;
  int actual = solution.myAtoi(s);
  EXPECT_EQ(actual, expected);
}

TEST_F(StringToIntegerTest, StopAtFirstNonDigit) {
  string s = "words and 987";
  int expected = 0;
  int actual = solution.myAtoi(s);
  EXPECT_EQ(actual, expected);
}

TEST_F(StringToIntegerTest, StopAtSign) {
  string s = "0-1";
  int expected = 0;
  int actual = solution.myAtoi(s);
  EXPECT_EQ(actual, expected);
}

TEST_F(StringToIntegerTest, OnlySpaces) {
  string s = "   ";
  int expected = 0;
  int actual = solution.myAtoi(s);
  EXPECT_EQ(actual, expected);
}

TEST_F(StringToIntegerTest, Overflow) {
  string s = "2147483648";
  int expected = INT_MAX;
  int actual = solution.myAtoi(s);
  EXPECT_EQ(actual, expected);
}

TEST_F(StringToIntegerTest, Underflow) {
  string s = "-2147483649";
  int expected = INT_MIN;
  int actual = solution.myAtoi(s);
  EXPECT_EQ(actual, expected);
}

TEST_F(StringToIntegerTest, NegativeNumberWithLeadingZeros) {
  string s = "   -00042";
  int expected = -42;
  int actual = solution.myAtoi(s);
  EXPECT_EQ(actual, expected);
}

TEST_F(StringToIntegerTest, EmptyString) {
  string s = "";
  int expected = 0;
  int actual = solution.myAtoi(s);
  EXPECT_EQ(actual, expected);
}
