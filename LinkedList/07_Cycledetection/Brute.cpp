
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Node {
public:
    int data;        
    Node* next;      

    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }

    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};


bool detectLoop(Node* head) {

    Node* temp = head;  
    std::unordered_map<Node*, int> nodeMap;  

    while (temp != nullptr) {

        if (nodeMap.find(temp) != nodeMap.end()) {
            return true;
        }
        nodeMap[temp] = 1;
        
        temp = temp->next;  
    }

    return false;
}

int main() {
    // Create a sample linked list
    // with a loop for testing
    
    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);
    Node* fourth = new Node(4);
    Node* fifth = new Node(5);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
     // Create a loop
    fifth->next = third; 

    if (detectLoop(head)) {
        cout << "Loop detected in the linked list." << endl;
    } else {
        cout << "No loop detected in the linked list." << endl;
    }

    // Clean up memory (free the allocated nodes)
    delete head;
    delete second;
    delete third;
    delete fourth;
    delete fifth;

    return 0;
}


