# Subsets

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an integer array `nums` of  **unique**  elements, return  *all possible*   *subsets*   *(the power set)*.

The solution set  **must not**  contain duplicate subsets. Return the solution in  **any order**.

 

 **Example 1:** 

```
Input: nums = [1,2,3]
Output: [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]

```

 **Example 2:** 

```
Input: nums = [0]
Output: [[],[0]]

```

 

 **Constraints:** 

- 1 <= nums.length <= 10
- -10 <= nums[i] <= 10
- All the numbers of nums are unique.

## Solution

**Language:** C++  
**Runtime:** 2 ms (beats 36.36%)  
**Memory:** 15.7 MB (beats 7.38%)  
**Submitted:** 2026-09-08T15:18:51.054Z  

```cpp
class Solution {
public:
   void helper(vector<int>&nums,vector<int>ans,vector<vector<int>>& finalans,int idx){
        if(idx==nums.size()){
            finalans.push_back(ans);
            return;
    }
    helper(nums,ans,finalans,idx+1);
    ans.push_back(nums[idx]);
    helper(nums,ans,finalans,idx+1);

}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>ans;
        vector<vector<int>>finalans;
        helper(nums,ans,finalans,0);
        return finalans;


    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/subsets/)