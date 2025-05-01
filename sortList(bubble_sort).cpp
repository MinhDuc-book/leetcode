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
    ListNode* sortList(ListNode* head) {
        for (ListNode *temp1 = head; temp1 != NULL and temp1 -> next != NULL; temp1 = temp1 -> next) {
            for (ListNode *temp2 = temp1 -> next; temp2 != NULL; temp2 = temp2 -> next) {
                if (temp2 -> val < temp1 -> val) {
                    int p = temp1 -> val;
                        temp1 -> val = temp2 -> val;
                        temp2 -> val = p;
                }
            }
        }
        return head;
    }
};
