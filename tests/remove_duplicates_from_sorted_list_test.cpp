#include <cstddef>
#include <gtest/gtest.h>
#include <remove_duplicates_from_sorted_list.hpp>
#include <vector>

class RemoveDuplicatesFromSortedListTest : public ::testing::Test {
protected:
  Solution solution;

  void check_equal(ListNode *actual, ListNode *expected) {
    if (actual && expected) {
      EXPECT_EQ(actual->to_string(), expected->to_string());
    } else {
      EXPECT_EQ(actual, expected);
    }
  }
};

TEST_F(RemoveDuplicatesFromSortedListTest, HandlesDuplicates) {
  ListNode *head = ListNode::from({1, 1, 2});
  ListNode *expected = ListNode::from({1, 2});
  ListNode *actual = solution.deleteDuplicates(head);
  check_equal(actual, expected);
}

TEST_F(RemoveDuplicatesFromSortedListTest, HandlesMultipleDuplicates) {
  ListNode *head = ListNode::from({1, 1, 2, 3, 3, 3, 3, 3, 3});
  ListNode *expected = ListNode::from({1, 2, 3});
  ListNode *actual = solution.deleteDuplicates(head);
  check_equal(actual, expected);
}

TEST_F(RemoveDuplicatesFromSortedListTest, HandlesNegativeAndPositive) {
  ListNode *head = ListNode::from({-2, -1, -1, 0, 0, 1, 2});
  ListNode *expected = ListNode::from({-2, -1, 0, 1, 2});
  ListNode *actual = solution.deleteDuplicates(head);
  check_equal(actual, expected);
}

TEST_F(RemoveDuplicatesFromSortedListTest, HandlesEmptyList) {
  ListNode *actual = solution.deleteDuplicates(nullptr);
  nullptr_t expected = nullptr;
  check_equal(actual, expected);
}

TEST_F(RemoveDuplicatesFromSortedListTest, HandlesSingleElementList) {
  ListNode *head = ListNode::from({42});
  ListNode *expected = ListNode::from({42});
  ListNode *actual = solution.deleteDuplicates(head);
  check_equal(actual, expected);
}

TEST_F(RemoveDuplicatesFromSortedListTest, HandlesAllDuplicates) {
  ListNode *head = ListNode::from({5, 5, 5, 5, 5});
  ListNode *expected = ListNode::from({5});
  ListNode *actual = solution.deleteDuplicates(head);
  check_equal(actual, expected);
}
