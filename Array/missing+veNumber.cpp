# include<iostream>
# include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int missingNumber(vector<int>& nums){
        n=nums.size();
        int ans=0;
        for(int i=0;i<n;i++){
            ans^=nums[i];
            ans^=i;

        }
        
    }
}