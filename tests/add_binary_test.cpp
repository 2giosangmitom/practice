#include "../src/add_binary.hpp"
#include <gtest/gtest.h>
using namespace std;

class AddBinaryTest : public ::testing::Test {
protected:
  Solution solution;
};

TEST_F(AddBinaryTest, BasicCase1) {
  string a = "11";
  string b = "1";
  string want = "100";

  string actual = solution.addBinary(a, b);
  EXPECT_EQ(actual, want);
}

TEST_F(AddBinaryTest, BasicCase2) {
  string a = "1010";
  string b = "1011";
  string want = "10101";

  string actual = solution.addBinary(a, b);
  EXPECT_EQ(actual, want);
}

TEST_F(AddBinaryTest, SingleDigitInputs) {
  EXPECT_EQ(solution.addBinary("0", "0"), "0");
  EXPECT_EQ(solution.addBinary("0", "1"), "1");
  EXPECT_EQ(solution.addBinary("1", "1"), "10");
}

TEST_F(AddBinaryTest, UnequalLengths) {
  EXPECT_EQ(solution.addBinary("1", "1000"), "1001");
  EXPECT_EQ(solution.addBinary("101", "10"), "111");
}

TEST_F(AddBinaryTest, CarryOver) {
  EXPECT_EQ(solution.addBinary("111", "1"), "1000");
  EXPECT_EQ(solution.addBinary("1111", "1"), "10000");
}

TEST_F(AddBinaryTest, ZeroInputs) {
  EXPECT_EQ(solution.addBinary("0", "0"), "0");
  EXPECT_EQ(solution.addBinary("101", "0"), "101");
}

TEST_F(AddBinaryTest, LargeInputs) {
  string a(1000, '1'); // 1000 '1's
  string b = "1";
  string want(1001, '0'); // 1000 '0's followed by '1'
  want[0] = '1';

  EXPECT_EQ(solution.addBinary(a, b), want);
}
