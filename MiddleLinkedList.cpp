/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode *middle = head;
        if (head == NULL or head -> next == NULL) {
            return head;
        }

        int count  = 0;
        for (ListNode *p = head; p != NULL; p = p -> next) {
            count = count + 1;
        }
        int temp = count / 2;

        for (int i = 0; i < temp; i++) {
            middle = middle -> next;
        }
        return middle;
    }
};
