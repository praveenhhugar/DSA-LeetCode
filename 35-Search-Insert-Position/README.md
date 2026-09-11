# Search Insert Position

## Problem

Given a sorted array of distinct integers and a target value,
return the index if the target is found.

If the target is not found, return the index where it would be
inserted to keep the array sorted.

## My Approach

I went through the array from the beginning using a for loop.

For each element, I checked whether the current element was
greater than or equal to the target.

- If nums[i] >= target, I return i.
- If the target is greater than all the elements, I return
  numsSize, which represents the position after the last element.

Since the array is already sorted, the first element that is
greater than or equal to the target gives me the required position.

## Example

`text
nums = [1, 3, 5, 6]
target = 5

5 is already present at index 2.

Answer: 2

## Example 2

`text
nums = [1, 3, 5, 6]
target = 2

2 would be placed between 1 and 3 

Answer: 1