# include<iostream>
# include<bits/stdc++.h>
using namespace std;
//brute force 
class Solution{
    public:
    int missingNumber(vector<int>& nums){
        int n=nums.size();
        for(int i=0;i<=n;i++){
            int count=0;
            for(int j=0;j<n;j++){
                if(nums[j]==i){
                    count++;
                }
            }
            if(count==0){
                return i;
            }
        }
         return -1;
    }

};
// Time complexity: O(n^2)
// space complexity: O(1) for count variable
// using hash map
class Solution{
    public:
    int missingNumber(vector<int>& nums){
        unordered_map<int,int>mp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            mp[nums[i]]++;

        }
        for(int i=0;i<=n;i++){
            if(mp[i]==0){
                return i;
            }
        }
        return -1;
    }
};
// Time complexity:- O(n)
// space complexity:- O(n) for hash map
// using sum formula
class Solution{
    int missingNumber(vector<int>& nums){
        int n=nums.size();
        int sum=(n*(n+1))/2;
        int initialSum=0;
        for(int i=0;i<n;i++){
            initialSum+=nums[i];

        }
        return sum-initialSum;
    }
};
// Time complexity:-O(n);
//space complexity:- O(1) for sum and initialsum variables