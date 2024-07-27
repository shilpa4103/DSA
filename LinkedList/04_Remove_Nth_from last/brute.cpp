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
    Node *temp=head;
    int cnt=0;
    while(temp!=NULL&&temp->next!=NULL){
        cnt=cnt+2;
        temp=temp->next->next;
    }
    if(temp!=NULL){
        cnt=cnt+1;
    }
    int m=cnt-n;
    temp=head;
    Node*slow=NULL;
    for(int i=0;i<m;i++){
        slow=temp;
        temp=temp->next;
    }
    slow->next=temp->next;
    free(temp);
    return head;

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

// Time Complexity: O(L)+O(L-N)
// Space Complexity:  O(1)