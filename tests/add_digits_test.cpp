#include <add_digits.hpp>
#include <gtest/gtest.h>

class AddDigitsTest : public ::testing::Test {
protected:
  Solution solution;
};

TEST_F(AddDigitsTest, even_number) {
  int num = 38;
  int actual = solution.addDigits(num);
  EXPECT_EQ(actual, 2);
}

TEST_F(AddDigitsTest, one_digit) {
  int num = 6;
  int actual = solution.addDigits(num);
  EXPECT_EQ(actual, 6);
}

TEST_F(AddDigitsTest, odd_number) {
  int num = 37;
  int actual = solution.addDigits(num);
  EXPECT_EQ(actual, 1);
}

TEST_F(AddDigitsTest, zero) { EXPECT_EQ(solution.addDigits(0), 0); }