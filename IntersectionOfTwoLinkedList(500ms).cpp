/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if (headA == NULL or headB == NULL) {
            return NULL;
        }

        if (headA == headB) {
            return headA;
        }

        if (headA -> next  == NULL and headB -> next == headA) {
            return headA;
        }

        if (headB -> next  == NULL and headA -> next == headB) {
            return headB;
        }


        for (ListNode *temp1 = headA; temp1 != NULL; temp1 = temp1 -> next) {
            for (ListNode *temp2 = headB; temp2 != NULL; temp2 = temp2 -> next) {
                if (temp1 == temp2) {
                    return temp1 ;
                }
            }
        }
        return NULL;
    }
};
