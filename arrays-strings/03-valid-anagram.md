# Valid Anagram

## Problem
Given two strings, determine whether one string is an anagram of the other.

## Approach
Use an integer array of size 26 to count the frequency of each lowercase letter.
Increase the count for characters in the first string and decrease it for characters in the second string.

## Complexity
- Time: O(n)
- Space: O(1)

## Notes
The two strings must have the same length.
After processing both strings, all character counts must be zero.