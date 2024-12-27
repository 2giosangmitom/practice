#include <add_binary.hpp>
#include <gtest/gtest.h>
using namespace std;

class AddBinaryTest : public ::testing::Test {
protected:
  Solution solution;
};

TEST_F(AddBinaryTest, case1) {
  string a = "11";
  string b = "1";
  string want = "100";

  string actual = solution.addBinary(a, b);
  EXPECT_EQ(actual, want);
}

TEST_F(AddBinaryTest, case2) {
  string a = "1010";
  string b = "1011";
  string want = "10101";

  string actual = solution.addBinary(a, b);
  EXPECT_EQ(actual, want);
}
