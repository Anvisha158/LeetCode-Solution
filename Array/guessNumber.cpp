# include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int guessNumber(int n){
        int low=1;
        int high=n;
        while(low<=high){
            long long mid=low+(high-low)/2 ;
            int pick=guessNumber(mid);
            if(pick==0){
                return mid;
            }
            else if(pick==-1){
                high=mid-1;

            }
            else{
                low=mid+1;
            }
        }
        return -1;
    }

};