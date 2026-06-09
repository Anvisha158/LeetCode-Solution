#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct ListNode{
    int data;
    ListNode* next;
    ListNode(int x){
        data=x;
        next=NULL;
    }
};
class Solution{
    public:
    ListNode* removeNthFromEnd(ListNode*head,int n){
        ListNode* dummy=new ListNode(0);
        dummy->next=head;
        ListNode* fast=dummy;
        ListNode* slow=dummy;
        for(int i=0;i<n;i++){
            fast=fast->next;
        }
        while(fast->next !=NULL){
            fast=fast->next;
            slow=slow->next;
        }
        slow->next=slow->next->next;
        return dummy->next;
    }
};
// TimeComplexity:-O(n)
// spaceComplexity:-O(1)