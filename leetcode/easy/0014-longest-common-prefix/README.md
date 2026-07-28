# Longest Common Prefix

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string `""`.

 

 **Example 1:** 

```
Input: strs = ["flower","flow","flight"]
Output: "fl"

```

 **Example 2:** 

```
Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.

```

 

 **Constraints:** 

- 1 <= strs.length <= 200
- 0 <= strs[i].length <= 200
- strs[i] consists of only lowercase English letters if it is non-empty.

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 12.2 MB (beats 8.56%)  
**Submitted:** 2026-07-28T18:46:40.593Z  

```cpp
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size( ) ==1) return strs[0];
        sort(strs.begin(),strs.end());
        string first=strs[0];
        string last=strs[strs.size()-1];
        string s="";
        for(int i=0;i<first.length();i++){
            if(first[i]==last[i]){
                s+=first[i];

            }
           else return s;
           
        }
        return s;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/longest-common-prefix/)