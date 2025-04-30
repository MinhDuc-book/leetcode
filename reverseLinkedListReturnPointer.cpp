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
    ListNode* reverseList(ListNode* head) {
        if (head == NULL|| head -> next == NULL) {
            return head;
        }
        ListNode *p = head;

        // đi tới cuối của LinkedList, sau khi thấy node cuối -> next == NULL, trả về head(lúc này ở node cuối) và không làm gì cả
        p = reverseList(head -> next); 
        // sau đó đệ quy bắt đầu quay ngược, tại node áp cuối thì thực hiện việc chuyển đầu con trỏ
        (head -> next) -> next = head;
        head -> next = nullptr;
        
        return p;
    }
};
