#include <add_two_numbers.hpp>
#include <gtest/gtest.h>

class AddTwoNumbersTest : public ::testing::Test {
protected:
  Solution solution;

  void check_equal(ListNode *actual, ListNode *expected) {
    EXPECT_EQ(actual->to_string(), expected->to_string());
  }
};

TEST_F(AddTwoNumbersTest, case1) {
  ListNode *l1 = ListNode::from({2, 4, 3});
  ListNode *l2 = ListNode::from({5, 6, 4});

  ListNode *actual = solution.addTwoNumbers(l1, l2);
  ListNode *expected = ListNode::from({7, 0, 8});
  check_equal(actual, expected);
}

TEST_F(AddTwoNumbersTest, case2) {
  ListNode *l1 = ListNode::from({0});
  ListNode *l2 = ListNode::from({0});

  ListNode *actual = solution.addTwoNumbers(l1, l2);
  ListNode *expected = ListNode::from({0});
  check_equal(actual, expected);
}

TEST_F(AddTwoNumbersTest, case3) {
  ListNode *l1 = ListNode::from({9, 9, 9, 9, 9, 9, 9});
  ListNode *l2 = ListNode::from({9, 9, 9, 9});

  ListNode *actual = solution.addTwoNumbers(l1, l2);
  ListNode *expected = ListNode::from({8, 9, 9, 9, 0, 0, 0, 1});
  check_equal(actual, expected);
}
