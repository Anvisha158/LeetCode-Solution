# include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    bool isValid(string s){
        stack <char> st;
        for(char ch : s){
            if (ch=='(' || ch=='{'||ch=='['){
                st.push(ch);
            }
            else{
                if(st.empty()){
                    return false;
                }
                char top=st.top();
                if((ch==')'&& top!='(')|| (ch=='}'&& top!='{') || ch==']'&& top!='['){
                    return false;
                }
                st.pop();
            }
        }
        return st.empty();
    }
};
// Time Complextity O(n) because we are traversing the string once
// space Complexity O(n) because we are using stack to store the opening brackets