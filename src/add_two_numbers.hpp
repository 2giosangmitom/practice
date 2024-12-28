#include "../lib/linked_list.hpp"

class Solution {
public:
  ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
    ListNode *dummy_head = new ListNode();
    ListNode *tail = dummy_head;
    int carry = 0;

    while (l1 || l2 || carry) {
      int digit1 = l1 ? l1->val : 0;
      int digit2 = l2 ? l2->val : 0;

      int sum = digit1 + digit2 + carry;
      carry = sum / 10;

      tail->next = new ListNode(sum % 10);
      tail = tail->next;

      if (l1)
        l1 = l1->next;
      if (l2)
        l2 = l2->next;
    }

    return dummy_head->next;
  }
};
