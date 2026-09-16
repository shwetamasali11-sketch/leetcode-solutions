# Valid Parentheses

## Problem
Check whether the brackets in a string are valid.

## Approach
Use a stack.

- Push every opening bracket.
- For a closing bracket, compare it with the top of the stack.
- If they do not match, return false.
- At the end, the stack must be empty.

## Complexity
Time: O(n)
Space: O(n)

## Language
C