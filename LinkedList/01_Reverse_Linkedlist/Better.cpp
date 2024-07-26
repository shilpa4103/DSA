#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data1,Node * next1){
        data=data1;
        next=next1;
    }

    Node(int data1){
        data=data1;
        next=nullptr;
    }
};


Node* reverseLinkedList(Node* head){
    Node* temp=head;
    Node* prev=nullptr;
    while(temp!=NULL){
        Node* front=temp->next;
        temp->next=prev;
        prev=temp;
        temp=front;

    }
    return prev;
}
void printLinkedList(Node * head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){
    Node* head=new Node(1);
    head->next=new Node(2);
    head->next->next=new Node(3);
    head->next->next->next=new Node(4);

    printLinkedList(head);

    head=reverseLinkedList(head);
    printLinkedList(head);
    return 0;
}

//Time Complexity: O(N)
//Space Complexity: O(1) 