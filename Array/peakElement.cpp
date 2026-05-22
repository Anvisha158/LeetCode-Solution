# include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int peakElement(vector<int>& nums){
        int n=nums.size();
        int low=0;
        int high=n-1;
        while(low<=high){
            long long mid=low+(high-low)/2;
            if(nums[mid]<nums[mid+1]){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return low;
    }
};
// time complexity:-O(log n) for binary search
// space complexity:-O(1) for low,high and mid variables