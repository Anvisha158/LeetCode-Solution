# include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct ListNode{
    int val;
    ListNode* next;
};
class Solution{
    public:
    void deleteNode(ListNode* node){
        node->val=node->next->val;
        node->next=node->next->next;
    }

};