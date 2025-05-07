class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if (head == NULL) {
            return head;
        }

        if (head -> next == NULL) {
            return NULL;
        }

        int size  = 0;
        for (ListNode *p = head; p != NULL; p = p -> next) {
            size = size + 1;
        }
        int temp = size / 2;

        ListNode *middle = head;
        for (int i = 0; i < temp-1; i++) {
            middle = middle -> next;
        }

        middle -> next = middle -> next -> next;
        
        return head;
    }
};
