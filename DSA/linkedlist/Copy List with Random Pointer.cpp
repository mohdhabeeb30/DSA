class Solution {
public:
    Node* copyRandomList(Node* head) {
        if (!head) return NULL;

        // Step 1: Create Clones and insert them after original nodes
        // Original: A -> B -> C
        // Result:   A -> A' -> B -> B' -> C -> C'
        Node* curr = head;
        while (curr) {
            Node* clone = new Node(curr->val);
            clone->next = curr->next;
            curr->next = clone;
            curr = clone->next;
        }

        // Step 2: Copy Random Pointers
        curr = head;
        while (curr) {
            if (curr->random) {
                // Clone's random = Original's random's next (which is its clone)
                curr->next->random = curr->random->next;
            }
            curr = curr->next->next;
        }

        // Step 3: Separate the lists
        Node* newHead = head->next;
        Node* currOld = head;
        Node* currNew = newHead;

        while (currOld) {
            currOld->next = currOld->next->next;
            if (currNew->next) {
                currNew->next = currNew->next->next;
            }
            currOld = currOld->next;
            currNew = currNew->next;
        }

        return newHead;
    }
};
