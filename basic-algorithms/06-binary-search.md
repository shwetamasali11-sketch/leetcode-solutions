# Binary Search

## Problem
Given a sorted array of integers and a target value, find the index of the target. Return -1 if the target is not found.

## Approach
Use two pointers, left and right, to represent the current search range.
Find the middle element and compare it with the target. If the target is smaller, search the left half; otherwise, search the right half.

## Complexity
- Time: O(log n)
- Space: O(1)

## Notes
Binary search works only when the array is sorted.
If the target is not present in the array, return -1.