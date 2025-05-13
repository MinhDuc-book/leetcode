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
    int getDecimalValue(ListNode* head) {
        int size = 0;
        int result = 0;
        if (head -> next == NULL) {
            return head -> val;
        }

        for (ListNode *p = head; p != NULL; p = p -> next) {
            size++; // dùng để tìm số lượng bit biểu diễn
        }

        for (ListNode *p = head; p != NULL; p = p -> next) {
            result = result + (p -> val)*pow(2, size-1); // công thức kiểm tra số nhị phân có tính đúng chưa: lấy giá trị tại vị trí đang xét nhân với 2 ^ (số thứ tự từ bit cuối, số thứ tự ở bit cuối là 0)
            size = size-1;
        }
        return result;
    }
};
