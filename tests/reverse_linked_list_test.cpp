#include "../src/reverse_linked_list.hpp"
#include <gtest/gtest.h>

class ReverseLinkedListTest : public ::testing::Test {
protected:
  Solution solution;
  void check_result(ListNode *head, ListNode *want) {
    ListNode *actual = solution.reverseList(head);
    EXPECT_EQ(actual ? actual->to_string() : "", want ? want->to_string() : "");
  }
};

TEST_F(ReverseLinkedListTest, case1) {
  ListNode *head = ListNode::from({1, 2, 3, 4, 5});
  ListNode *want = ListNode::from({5, 4, 3, 2, 1});
  check_result(head, want);
}

TEST_F(ReverseLinkedListTest, case2) {
  ListNode *head = ListNode::from({1, 2, 4, 4, 5});
  ListNode *want = ListNode::from({5, 4, 4, 2, 1});
  check_result(head, want);
}

TEST_F(ReverseLinkedListTest, case3) {
  ListNode *head = ListNode::from({});
  ListNode *want = ListNode::from({});
  check_result(head, want);
}
