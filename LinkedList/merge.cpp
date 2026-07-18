#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct ListNode{
    int val;
    ListNode* next;
    ListNode(int x){
        val=x;
        next=NULL;
    }
};
class Solution{
    public:
    ListNode* mergeTwoSortedList(ListNode* list1,ListNode* list2){
        ListNode dummy(0);
        ListNode* temp=&dummy;
        while(list1!=NULL && list2!=NULL){
            if(list1->val<=list2->val){
                temp->next=list1;
                list1=list1->next;
            }
            else{
                temp->next=list2;
                list2=list2->next;
            }
            temp=temp->next;


        }
        if(list1){
            temp->next=list1;
        }
        else{
            temp->next=list2;
        }
        return dummy.next;
    }
};
// time complexity:-O(n+m)
// space complexity:-O(1)
