# include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int sqrt(int x){
        int low=0;
        int high=x-1;
        int ans=-1;
        while(low<=high){
            long long mid=low+(high-low)/2;
            if(mid*mid==x){
                return mid;
            }
            else if(mid*mid<x){
                ans=mid;
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return ans;
    }
};