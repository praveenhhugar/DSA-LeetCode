# Two Sum

## 🧩 Problem

Given an array of integers nums and an integer target,
find two numbers whose sum is equal to the target and return
their indices.

## 💭 My Approach

I started by taking the first element and checking it with
every element that comes after it.

I used two loops:
- The first loop selects an element.
- The second loop checks the elements after it.
- If nums[i] + nums[j] equals the target, I return i and j.

This way, I check all possible pairs until I find the required pair.

## 🔎 Example

`text
nums = [2, 7, 11, 15]
target = 9

2 + 7 = 9

Answer: [0, 1]