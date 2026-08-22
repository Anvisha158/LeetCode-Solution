# include<iostream>
#include<bits/stdc++.h>
using namespace std;
class solution{
    stack<pair<int,int>>st;
    public:
    stackSpanner(){

    }
    int next (int price){
        int span=1;
        while(!st.empty()&& st.top().first<=price){
            span+=st.top().second;
            st.pop();

        }
        st.push({price,span});
        return span;
    }
};