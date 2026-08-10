# include<iostream>
#include<bits/stdc++.h>
using namespace std;
class solution{
    public:
    vector<int>nextgreaterElements(vector<int>&nums){
        int n=nums.size();
        vector<int>ans(n,-1);
        stack<int>st;
        for(int i=2*n-1;i>=0;i--){
            int curr=nums[i % n];
            while(!st.empty() && st.top()<=curr){
                st.pop();
            }
            if(i<n&& !st.empty()){
                ans[i]=st.top();

            }
            st.push(curr);
        }
        return ans;
    }
};
// time complexity O(n) because we are traversing the array twice
// space complexity O(n) because we are using stack to store the elements