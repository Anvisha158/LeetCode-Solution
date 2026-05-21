# include<iostream>
# include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    vector<int> mergeSorted(vector<int>& nums1, int m, vector<int>& nums2,int n){
        int j=0;
        for(int i=m;i<m+n;i++){
            nums1[i]=nums2[j];
            j++;
        }
        sort(nums1.begin(),nums1.end());
        return nums1;
    }
};
// Time complexity:-O(m+n) 
// space complexity:-O(1)
