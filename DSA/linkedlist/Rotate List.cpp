class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || !head->next || k == 0) return head;
        
        // 1. Find the length
        ListNode *temp = head;
        int count = 0;
        while(temp != NULL){
            count++;
            temp = temp->next;
        }

        k = k % count;
        if(k == 0) return head;
        
        
        count = count - k;
        ListNode *curr = head;
        ListNode *prev = NULL;
        while(count != 0){
            prev = curr;
            curr = curr->next;
            count--;
        }
        
        prev->next = NULL;
        ListNode *tail = curr;
        while(tail->next != NULL){
            tail = tail->next;
        }
        tail->next = head;
       
        return curr; 
    }
};
