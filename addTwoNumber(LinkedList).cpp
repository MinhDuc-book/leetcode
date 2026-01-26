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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *dummy = new ListNode();
        ListNode *res = dummy;
        
        int temp = 0;
        int curr = 0;
        while(l1 || l2 || temp) {
            curr = temp;

            if (l1) {
                curr += l1->val;
                l1 = l1->next;
            }

            if (l2) {
                curr += l2->val;
                l2 = l2->next;
            }

            
            int num = curr % 10;
            
            temp = curr / 10;
            dummy->next = new ListNode(num);
            dummy = dummy->next;
        }

        return res->next;
        
    }
};
