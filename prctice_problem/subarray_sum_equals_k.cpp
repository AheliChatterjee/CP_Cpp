/*560. Subarray Sum Equals K
Solved
Medium
Topics
premium lock icon
Companies
Hint
Given an array of integers nums and an integer k, return the total number of subarrays whose sum equals to k.

A subarray is a contiguous non-empty sequence of elements within an array.

 

Example 1:

Input: nums = [1,1,1], k = 2
Output: 2*/
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map <int , int> mp;
        int count = 0, sum = 0;
        for(int i = 0; i < nums.size(); i++ ){
            sum += nums[i];
            if(sum == k) count++;
            if(mp.find(sum - k)!= mp.end())count += mp[sum-k];
            mp[sum]++;
        }
        return count;

    }
};