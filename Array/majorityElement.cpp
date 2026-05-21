// using brute force approach
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int majorityElement(vector<int>& nums){
        for(int i=0;i<nums.size();i++){
            int count=0;
            for(int j=0;j<nums.size();j++){
                if(nums[i]==nums[j]){
                    count++;
                }
            }
            if(count>nums.size()/2){
                return nums[i];
            }
        }
        return -1;
    }
};
// Time complexity:-O(n^2)
// space complexity:-O(1) for count variable

// using hash map
class Solution{
    public:
    int majorityElement(vector<int>& nums){
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
            if(mp[nums[i]]>nums.size()/2){
                return nums[i];
            }
        }
        return -1;
    } 
};
// Time complexity:-O(n)
// space complexity:-O(n) for hash map