# include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    vector<int> sortedSquares(vector<int>& nums) {
    // sorting appproach
    int n=nums.size();
    for(int i=0;i<n;i++){
        nums[i]=nums[i]*nums[i];
        
    }
    sort(nums.begin(),nums.end());
    return nums;
    }

};
// time complexity:-O(nlogn)
// space complexity:-O(1)

// use two pointer approach
class Solution{
    public:
    vector<int> sortedSquares(vector<int>& nums){
        int n=nums.size();
        vector<int> result(n);
        int left=0;
        int right=n-1;
        int i=n-1;// start filling the reasult array from the end
        while(left<=right){
            if(nums[left]*nums[left]>nums[right]*nums[right]){
                result[i]=nums[left]*nums[left];
                left++;
            }
            else{
                result[i]=nums[right]*nums[right];
                right--;
            }
        }
        return result;
    }
};
// time complexity:-O(n)
// space complexity:-O(n)