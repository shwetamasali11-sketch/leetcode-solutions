# Best Time to Buy and Sell Stock

## Problem
Given an array of stock prices, find the maximum profit possible by buying on one day and selling on a later day.

## Approach
Keep track of the minimum price seen so far. For each day's price, calculate the profit by subtracting the minimum price from the current price and update the maximum profit.

## Complexity
- Time: O(n)
- Space: O(1)

## Notes
The stock must be bought before it is sold. If no profit is possible, return 0.