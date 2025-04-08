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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (list1 == NULL) return list2;
        ListNode *temp = list1;
        
        while (temp -> next != NULL) {
            temp = temp -> next;
        }
        temp -> next = list2;

        for (ListNode* p = list1; p -> next != NULL; p = p -> next) {
            for (ListNode* q = p->next; q != NULL; q = q -> next) {
                if (p -> val > q -> val and p != NULL and q != NULL) {
                    int n = p->val;
                        p->val = q->val;
                        q->val = n;
                }
            }
        }
        return list1;
    }
};
