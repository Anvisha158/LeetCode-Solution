# include<iostream>
# include<bits/stdc++.h>
using namespace std;
struct ListNode{
    int data;
    ListNode* next;

};
class Solution{
    public:
    ListNode* deleteMidleNode(ListNode* head){
        if(head==NULL||head->next==NULL){
            return NULL;
        }
        ListNode* slow=head;
        ListNode* fast=head;
        ListNode* prev=NULL;
        while(fast!=NULL&&fast->next!=NULL){
            prev=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        prev->next=slow->next;
        return head;
    }
};
// Time Complexity=O(n)
//Space Complexity=O(1)