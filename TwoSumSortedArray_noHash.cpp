Skip to content
Search or jump to…
Pull requests
Issues
Marketplace
Explore
 
@khyatig95 
khyatig95
/
Concepts
Public
Code
Issues
1
Pull requests
Actions
Projects
Wiki
Security
Insights
Settings
Concepts/TwoSumSortedArray_noHash.cpp
@khyatig95
khyatig95 Create TwoSumSortedArray_noHash.cpp
Latest commit 6658f3e 22 days ago
 History
 1 contributor
28 lines (25 sloc)  851 Bytes

/*
Problem : Given a sorted array of integers nums and an integer target, return the two numbers from the array such that they add up to target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.
You can return the answer in any order.
Time Complexity : O(NlogN)
Space Complexity : O(1)
*/

#include <algorithm>
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end()); //O(NlogN)
        int size = nums.size();
        int j = size-1, i = 0;
        
        while (i<j) {  //O(N) ; Space O(1)
            if (nums[i] + nums[j] == target)
                return {nums[i], nums[j]};
            if (nums[i] + nums[j] > target)
                j--;
            else 
                i++;
        }
        return {0, 0};
    }
};
Footer
© 2022 GitHub, Inc.
Footer navigation
Terms
Privacy
Security
Status
Docs
Contact GitHub
Pricing
API
Training
Blog
About
