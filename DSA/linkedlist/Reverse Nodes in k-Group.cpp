class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if (head == NULL || head->next == NULL) return head;
        ListNode* check = head;
        int count = 0;
        while (check != NULL && count < k) {
            check = check->next;
            count++;
        }

        if (count == k) {
            ListNode* nextGroupHead = reverseKGroup(check, k);
            ListNode* curr = head;
            ListNode* prev = nextGroupHead; 
            ListNode* temp = NULL;

            for(int i = 0; i < k; i++) {
                temp = curr->next;
                curr->next = prev;
                prev = curr;
                curr = temp;
            }
            return prev; 
        }

        
        return head;
    }
};
