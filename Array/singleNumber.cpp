// // use brute force
# include<iostream>
# include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int singleNumber(vector<int>& nums){
        for(int i=0;i<nums.size();i++){
            int count=0;
            for(int j=0;j<nums.size();j++){
                if(nums[i]==nums[j]){
                    count++;
                }
            }
            if(count==1){
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
    int singleNumber(vector<int>& nums){
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;

        }
        for(int i=0;i<nums.size();i++){
            if(mp[nums[i]]==1){
                return nums[i];
            }
        }
        return -1;
    }
};
//Time Complexity:-O(n)
// space Complexity:-O(n) for hash map
// using Xor operator
class Solution{
    public:
    int singleNumber(vector<int>& nums){
        int ans=0;
        for(int i=0;i<nums.size();i++){
            ans^=nums[i];
        }
        return ans;
    }
};
// Time complexity:-O(n)
// space complexity:-O(1) for ans variable