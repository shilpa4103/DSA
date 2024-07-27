    void deleteNode(ListNode* node) {
        ListNode* temp=node->next;
        node->val=node->next->val;
        node->next=node->next->next;
        delete temp;
    }

    //Time complexity:O(1)
    //space complexity:O(1)