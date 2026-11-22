# Max Consecutive Ones

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given a binary array `nums`, return  *the maximum number of consecutive* `1` *'s in the array*.

 

Original
C++
 **Example 1:** 

```
Input: nums = [1,1,0,1,1,1]
Output: 3
Explanation: The first two digits or the last three digits are consecutive 1s. The maximum number of consecutive 1s is 3.

```

 **Example 2:** 

```
Input: nums = [1,0,1,1,0,1]
Output: 2

```

 

 **Constraints:** 

- 1 <= nums.length <= 105
- nums[i] is either 0 or 1.

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 50.1 MB (beats 85.03%)  
**Submitted:** 2026-11-22T13:52:04.594Z  

```cpp

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {

        int left = 0;
        int maxi = 0;

        for(int right = 0; right < nums.size(); right++) {

            if(nums[right] == 0) {
                left = right + 1;
            }

            maxi = max(maxi, right - left + 1);
        }

        return maxi;
    }
};

```

---

[View on LeetCode](https://leetcode.com/problems/max-consecutive-ones/)