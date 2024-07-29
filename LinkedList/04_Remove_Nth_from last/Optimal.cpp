#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data,Node* next){
        this->data=data;
        this->next=next;
    }

    Node(int data){
        this->data=data;
        this->next=nullptr;
    }
};

Node* removeNth(Node* head,int n){
    // Create two pointers, fastp and slowp
    Node* fastp = head;
    Node* slowp = head;

    // Move the fastp pointer N nodes ahead
    for (int i = 0; i < N; i++)
        fastp = fastp->next;

    // If fastp becomes NULL,
    // the Nth node from the end is the head
    if (fastp == NULL)
        return head->next;

    // Move both pointers until fastp reaches the end
    while (fastp->next != NULL) {
        fastp = fastp->next;
        slowp = slowp->next;
    }

    // Delete the Nth node from the end
    Node* delNode = slowp->next;
    slowp->next = slowp->next->next;
    delete delNode;
    return head;c

}

void printLinkedList(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}


int main(){
    Node *head=new Node(1);
    head->next=new Node(2);
    head->next->next=new Node(3);
    int n;
    cin>>n;

    head=removeNth(head,n);
    printLinkedList(head);

    return 0;
}