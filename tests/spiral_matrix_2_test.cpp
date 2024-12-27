#include <gtest/gtest.h>
#include <spiral_matrix_2.hpp>

class SpiralMatrix2Test : public ::testing::Test {
protected:
  Solution solution;
};

TEST_F(SpiralMatrix2Test, case1) {
  int n = 3;
  vector<vector<int>> want = {{1, 2, 3}, {8, 9, 4}, {7, 6, 5}};
  auto actual = solution.generateMatrix(n);
  EXPECT_EQ(want, actual);
}

TEST_F(SpiralMatrix2Test, case2) {
  int n = 4;
  vector<vector<int>> want = {
      {1, 2, 3, 4}, {12, 13, 14, 5}, {11, 16, 15, 6}, {10, 9, 8, 7}};
  auto actual = solution.generateMatrix(n);
  EXPECT_EQ(want, actual);
}
