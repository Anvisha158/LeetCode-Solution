# include<iostream>
# include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
    vector<int> dailyTemperatures(vector<int>& temperatures){
        int n=temperatures.size();
        vector<int>ans(n,0);
        stack<int>st;
        for(int i=0;i<n;i++){
            while(!st.empty()&& temperatures[st.top()]<temperatures[i]){
                ans[st.top()]=i-st.top();
                st.pop();
            }
            st.push(i);
        }
        return ans;
    }
};
// time complexity O(n) where n is the size of temperatures because we are traversing the array once and each elements is pushed and popped from the stack at most once
// space complexity O(n) where n is the size of tempratures because we are using stack to store the indices of the elements 