/*1-D prefix sum
Difficulty: EasyAccuracy: 96.88%Submissions: 32+Points: 2Average Time: 10m
Given an array arr[], the goal is to compute its prefix sum array. The prefix sum array, prefixSum[], should be of the same length as arr[], where each element prefixSum[i] represents the sum of all elements from the start of the array up to index i, i.e., prefixSum[i] = arr[0] + arr[1] + .... + arr[i].

Examples:

Input: arr[] = [10, 20, 10, 5, 15]
Output: [10, 30, 40, 45, 60]
Explanation: For each index i, add all the elements from 0 to i:
prefixSum[0] = 10, 
prefixSum[1] = 10 + 20 = 30, 
prefixSum[2] = 10 + 20 + 10 = 40 and so on.*/

#include<iostream>
#include<vector>
using namespace std;
class Solution {
  public:
    vector<int> prefSum(vector<int> &arr) {
        vector <int> prefix(arr.size());
        prefix[0] = arr[0];
        for(int i =1; i< arr.size(); i++){
            prefix[i] = prefix[i-1]+arr[i];
        }
        
        return prefix;

        
    }
};