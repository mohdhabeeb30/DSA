class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        int count = 0;

        // count nodes
        while(temp != NULL){
            count++;
            temp = temp->next;
        }

        // if head needs to be removed
        if(count == n){
            ListNode* del = head;
            head = head->next;
            delete del;
            return head;
        }

        count = count - n;

        ListNode* curr = head;
        ListNode* prev = NULL;

        while(count != 0){
            prev = curr;
            curr = curr->next;
            count--;
        }

        prev->next = curr->next;
        delete curr;

        return head;
    }
};