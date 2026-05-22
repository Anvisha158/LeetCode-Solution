#include<iostream>
# include<bits/stdc++.h>
using namespace std;
// brute force
class Solution{
    public:
    int search(vector<int>& nums,int target){
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                return i;
            }

        }
        return -1;
    }
};
// Time complexity:-O(n) for linear search
// space complexity:-O(1) fori variable

// binary search
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int left=0;
        int right=n-1;
        while(left<=right){
            int mid =left+(right-left)/2;
            if(nums[mid]==target){
                return mid;
            }
            if(nums[left]<=nums[mid]){
                if(target>=nums[left]&& target<nums[mid]){
                    right=mid-1;
                }
                else{
                    left=mid+1;
                }
            }
            else{
                if(target>nums[mid]&& target<=nums[right]){
                    left=mid+1;
                }
                else{
                    right=mid-1;
                }
            }
        }
        return -1;
    }

};
// Time complexity:-O(log n) for binary search
// space complexity:-O(1) for left,right and mid variables