#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int data1,Node * next1){
        data=data1;
        next=next1;
    }

    Node(int data1){
        data=data1;
        next=nullptr;
    }
};


Node* addTwoNumbers(Node* l1, Node* l2) {
        Node *dummy = new Node(-1); 
        Node *temp = dummy; 
        int carry = 0;
        while( (l1 != NULL || l2 != NULL) || carry) {
            int sum = 0; 
            if(l1 != NULL) {
                sum += l1->data; 
                l1 = l1 -> next; 
            }
            
            if(l2 != NULL) {
                sum += l2 -> data; 
                l2 = l2 -> next; 
            }
            
            sum += carry; 
            carry = sum / 10; 
            Node *node = new Node(sum % 10); 
            temp -> next = node; 
            temp = temp -> next; 
        }
        return dummy -> next; 
    }
void printLinkedList(Node* head){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
}
     

int main(){
    Node * head1=new Node(1);
    head1->next=new Node(3);
    head1->next->next=new Node(5);


    Node * head2=new Node(2);
    head2->next=new Node(4);
    head2->next->next=new Node(6);


    printLinkedList(head1);
    printLinkedList(head2);

    Node *head=addTwoNumbers(head1,head2);
    printLinkedList(head);
    return 0;
}

// Time Complexity: O(max(m,n))
// Space Complexity: O(max(m,n))