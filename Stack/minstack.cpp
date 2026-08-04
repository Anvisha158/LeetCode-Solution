#include<iostream>
# include<bits/stdc++.h>
using namespace std;
class minStack{
    stack<int>st;
    stack<int>minst;
    minStack(){

    }
    void push(int val){
        st.push(val);
        if(minst.empty()){
            minst.push(val);
            }
        else{ 
            minst.push(min(val,minst.top()));
                
            }
        }
    void pop(){
        st.pop();
        minst.pop();
    }
    int top(){
        return st.top();
    }
    int getMin(){
        return minst.top();
    }
    
};
// time complexity O(1) for all the operations
// space complexity O(n) because we are using two stack to store the elements and the minimum elements