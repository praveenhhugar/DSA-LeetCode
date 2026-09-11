# Single Number

## Problem

Given a non-empty array of integers, every element appears twice except for one element that appears only once.

Return the element that appears only once.

## My Approach

I used the **XOR (^) operator**.

I start with result = 0 and XOR it with every element of the array.

`c
result = result ^ nums[i];

Example :
nums = [2, 2, 1]

result = 0

0 ^ 2 = 2  
2 ^ 2 = 0  
0 ^ 1 = 1
