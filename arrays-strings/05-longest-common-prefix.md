# Longest Common Prefix

## Problem
Given an array of strings, find the longest common prefix shared by all the strings.

## Approach
Take the first string as the initial prefix and compare it with each remaining string.
Shorten the prefix whenever the current string does not start with the same prefix.

## Complexity
- Time: O(n × m)
- Space: O(1)

## Notes
If there is no common prefix, return an empty string.
Here, n is the number of strings and m is the length of the prefix.

## Problem
Given an array of stock prices, find the maximum profit possible by buying on one day and selling on a later day.

## Approach
Keep track of the minimum price seen so far. For each day's price, calculate the profit by subtracting the minimum price from the current price and update the maximum profit.

## Complexity
- Time: O(n)
- Space: O(1)

## Notes
The stock must be bought before it is sold. If no profit is possible, return 0.