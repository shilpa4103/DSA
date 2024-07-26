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

Node* mergingLinkedList(Node* head1,Node* head2){
    Node* temp1=head1;
    Node* temp2=head2;
    Node* dummy=new Node(-1);
    Node* temp=dummy;
    while(temp1!=NULL && temp2!=NULL){
        if(temp1->data<=temp2->data){
            temp->next=temp1;
            temp1=temp1->next;
            temp=temp->next;
        }
        else{
            temp->next=temp2;
            temp2=temp2->next;
            temp=temp->next;
        }
    }
    while(temp1!=NULL){
        temp->next=temp1;
        temp1=temp1->next;
        temp=temp->next;


    }
    while(temp2!=NULL){
        temp->next=temp2;
        temp2=temp2->next;
        temp=temp->next;


    }
    return dummy->next;
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

    Node *head=mergingLinkedList(head1,head2);
    printLinkedList(head);
    return 0;
}


// Time Complexity: O(N1+N2)
// Space Complexity : O(1)