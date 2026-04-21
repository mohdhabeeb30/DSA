class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        vector<int> ans;
        ListNode* temp = head;

        // store values
        while(temp != NULL){
            ans.push_back(temp->val);
            temp = temp->next;
        }

        // reverse assign
        int i = ans.size() - 1;
        temp = head;
        while(temp != NULL){
            temp->val = ans[i];
            i--;
            temp = temp->next;   // important
        }

        return head;
    }
};