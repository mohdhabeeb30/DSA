class Solution {
public:
    void deleteNode(ListNode* node) {
        node->val = node->next->val;      // next ka data copy
        node->next = node->next->next;
        
    }
};