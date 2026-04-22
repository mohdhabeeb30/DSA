class Solution {
public:
    int findLengthOfLoop(ListNode *head) {
        
        if(head == NULL || head->next == NULL) {
            return 0;
        }

        ListNode *slow = head;
        ListNode *fast = head;

        while(fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast) {
                int count = 1;
                ListNode *temp = slow;
                while(temp->next != slow) {
                    count++;
                    temp = temp->next;
                }
                return count; 
            }
        }

        return 0;
    }
};
