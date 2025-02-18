#include "linked_list_cycle.hpp"

bool Solution::hasCycle(ListNode *head) {
  ListNode *slow = head, *fast = head;

  while (fast && fast->next) {
    slow = slow->next;
    fast = fast->next->next;

    if (slow == fast) {
      return true;
    }
  }

  return false;
}
