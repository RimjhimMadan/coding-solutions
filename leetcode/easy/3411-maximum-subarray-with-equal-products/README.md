# Maximum Subarray With Equal Products

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

You are given an array of  **positive**  integers `nums`.

An array `arr` is called  **product equivalent**  if `prod(arr) == lcm(arr) * gcd(arr)`, where:

- prod(arr) is the product of all elements of arr.
- gcd(arr) is the GCD of all elements of arr.
- lcm(arr) is the LCM of all elements of arr.

Return the length of the  **longest**   **product equivalent**  subarray of `nums`.

 

Original
Python3
 **Example 1:** 

 **Input:**  nums = [1,2,1,2,1,1,1]

 **Output:**  5

 **Explanation:**  

The longest product equivalent subarray is `[1, 2, 1, 1, 1]`, where `prod([1, 2, 1, 1, 1]) = 2`, `gcd([1, 2, 1, 1, 1]) = 1`, and `lcm([1, 2, 1, 1, 1]) = 2`.

 **Example 2:** 

 **Input:**  nums = [2,3,4,5,6]

 **Output:**  3

 **Explanation:**  

The longest product equivalent subarray is `[3, 4, 5].`

 **Example 3:** 

 **Input:**  nums = [1,2,3,1,4,5,1]

 **Output:**  5

 

 **Constraints:** 

- 2 <= nums.length <= 100
- 1 <= nums[i] <= 10

## Solution

**Language:** Python  
**Runtime:** 7 ms (beats 80.42%)  
**Memory:** 19.2 MB (beats 83.33%)  
**Submitted:** 2026-11-24T13:44:14.101Z  

```py
class Solution:
    def maxLength(self, nums: List[int]) -> int:
        res = 0
        for i in range(len(nums)):
            prod_val = nums[i]
            gcd_val = nums[i]
            lcm_val = nums[i]
            for j in range(i + 1, len(nums)):
                prod_val = prod_val * nums[j]
                gcd_val = gcd(gcd_val, nums[j])
                lcm_val = lcm(lcm_val, nums[j])
                if prod_val > gcd_val * lcm_val:
                    break
                if prod_val == gcd_val * lcm_val:
                    res = max(res, j - i + 1)
        return res
```

---

[View on LeetCode](https://leetcode.com/problems/maximum-subarray-with-equal-products/)