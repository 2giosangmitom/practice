#include <gtest/gtest.h>
#include <single_number.hpp>

class SingleNumberTest : public ::testing::Test {
protected:
  Solution solution;
};

TEST_F(SingleNumberTest, same_numbers_twice) {
  vector<int> nums = {2, 2, 1};
  int expected = 1;
  int result = solution.singleNumber(nums);
  int result2 = solution.singleNumber2(nums);
  ASSERT_EQ(result, expected);
  ASSERT_EQ(result2, expected);
}

TEST_F(SingleNumberTest, same_numbers_interleaved) {
  vector<int> nums = {4, 1, 2, 1, 2};
  int expected = 4;
  int result = solution.singleNumber(nums);
  int result2 = solution.singleNumber2(nums);
  ASSERT_EQ(result, expected);
  ASSERT_EQ(result2, expected);
}

TEST_F(SingleNumberTest, one_element) {
  vector<int> nums = {1};
  int expected = 1;
  int result = solution.singleNumber(nums);
  int result2 = solution.singleNumber2(nums);
  ASSERT_EQ(result, expected);
  ASSERT_EQ(result2, expected);
}