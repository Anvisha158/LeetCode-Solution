#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
        int data;
        Node* next;
    public:
        Node(int value, Node* address){
            data = value;
            next = address;
        }
    public:
        Node(int value){
            data = value;
            next = NULL;
        }
    public:
        Node(){
            data = 0;
            next = NULL;
        }
};

class solution {
public:
    Node* addTwoNumbers(Node *head1, Node *head2) {

        Node* dummy = new Node(0);
        Node* temp = dummy;

        int carry = 0;

        while (head1 != NULL || head2 != NULL || carry) {

            int sum = carry;

            if (head1 != NULL) {
                sum += head1->data;
                head1 = head1->next;
            }

            if (head2 != NULL) {
                sum += head2->data;
                head2 = head2->next;
            }

            carry = sum / 10;

            temp->next = new Node(sum % 10);
            temp = temp->next;
        }

        return dummy->next;
    }
};