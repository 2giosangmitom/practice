#include "../lib/linked_list.hpp"

class Solution {
public:
  ListNode *reverseList(ListNode *head) {
    if (!head) {
      return {};
    }
    ListNode *result = new ListNode{head->val};
    head = head->next;

    while (head) {
      ListNode *new_node = new ListNode{head->val, result};
      result = new_node;
      head = head->next;
    }

    return result;
  }
};
