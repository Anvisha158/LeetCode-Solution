# include<iostream>
#include<bits/stdc++.h>
using namespace std;
class solution{
    public:
    string removeKdigits(string num,int k){
        string st="";
        for(char c: num){
            while(!st.empty()&& k>0 && st.back()>c){
                st.pop_back();
                k--;
            }
            st.push_back(c);
        }
        while(k>0){
            st.pop_back();
            k--;
        }
        int i=0;
        while(i<st.size()-1&& st[i]=='0'){
            i++;
        }
        string ans =st.substr(i);
        if(ans.empty()){
            return "0";
        }
        return ans;
    }
}
// time complexity:- O(n)
// space complexity:-O(n)