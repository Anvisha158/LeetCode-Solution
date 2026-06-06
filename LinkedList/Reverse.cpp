# include<iostream>
#include<bits/stdc++.h>
using namespace std;
// make new node
struct ListNode{
    int data;
    ListNode* next;
};
class Solution{
    public:
    ListNode* reverseList(ListNode* head){
        ListNode* prev=NULL;
        ListNode* curr=head;
        while(curr!=NULL){
            ListNode* next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
};
