class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
         ListNode* slow = head;
        ListNode* fast = head;

        if(head==NULL || head->next==NULL){
            return NULL;
        }
        while(fast != NULL && fast->next != NULL){
            slow = slow->next;         
            fast = fast->next->next;   

        }
       delete slow->next;
       slow->next=fast->next;
       return head;
    }
};