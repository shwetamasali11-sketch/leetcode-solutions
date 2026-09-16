# Reverse Linked List

## Problem
Reverse a singly linked list.

## Approach
Use three pointers: `prev`, `current`, and `next`.
Save the next node, reverse the current node's link, and then move the pointers forward until the list is reversed.

## Complexity
- Time: O(n)
- Space: O(1)

## Notes
The `next` pointer is saved before changing `current->next`, so the remaining list is not lost.