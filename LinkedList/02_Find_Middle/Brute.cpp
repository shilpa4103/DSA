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


    int findMiddle(Node* head){
        Node *temp=head;
        int cnt=0;
        while(temp!=NULL){
            cnt++;
            temp=temp->next;
        }
        int mid=(cnt/2)+1;
        temp=head;
        while(temp!=NULL){
            mid=mid-1;
            if(mid==0){
                break;
            }
            temp=temp->next;
        }
        return temp->data;
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
    Node * head=new Node(1);
    head->next=new Node(2);
    head->next->next=new Node(3);
    head->next->next->next=new Node(4);
    head->next->next->next->next=new Node(5);

    printLinkedList(head);

    int middle=findMiddle(head);
    cout<<middle;


    return 0;
}

// Time Complexity: O(N+N/2)
// Space Complexity : O(1) 