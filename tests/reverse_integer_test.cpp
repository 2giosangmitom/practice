#include <gtest/gtest.h>
#include <reverse_integer.hpp>

class ReverseIntegerTest : public ::testing::Test {
protected:
  Solution solution;
};

TEST_F(ReverseIntegerTest, reverse_positive_integer) {
  int x = 123;
  int want = 321;

  int actual = solution.reverse(x);
  EXPECT_EQ(actual, want);
}

TEST_F(ReverseIntegerTest, reverse_negative_integer) {
  int x = -123;
  int want = -321;

  int actual = solution.reverse(x);
  EXPECT_EQ(actual, want);
}

TEST_F(ReverseIntegerTest, reverse_integer_with_trailing_zeros) {
  int x = 120;
  int want = 21;

  int actual = solution.reverse(x);
  EXPECT_EQ(actual, want);
}

TEST_F(ReverseIntegerTest, encounter_overflow) {
  int x1 = -2147483648;
  int want1 = 0;

  int actual1 = solution.reverse(x1);
  EXPECT_EQ(actual1, want1);

  int x2 = 2147483647;
  int want2 = 0;

  int actual2 = solution.reverse(x2);
  EXPECT_EQ(actual2, want2);
}

TEST_F(ReverseIntegerTest, max_int) {
  int x = 1463847412;
  int want = 2147483641;
  int actual = solution.reverse(x);
  EXPECT_EQ(actual, want);
}