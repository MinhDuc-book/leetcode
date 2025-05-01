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

// làm bằng cách thêm vào 1 cái vector xong so sánh các giá trị trong vector
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector <int> temp;
        for (ListNode *p = head; p != NULL; p = p -> next) {
            temp.push_back(p -> val);
        }

        for (int i = 0; i < temp.size(); ++i) {
            if (temp[i] != temp[temp.size() - i - 1]) {
                return false;
            }
        }
        return true;
    }
};

// làm bằng cách tạo thêm 1 cái linkedlist đảo ngược mới xong so sánh
class Solution {
public:
ListNode* reverse(ListNode* head) {
        ListNode* curr = head;
        ListNode* prev = NULL;
        ListNode* temp;
        
        while(curr){
            temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return true;
        }
        ListNode* slow=head;
        ListNode* fast= head;
        while( fast->next && fast->next->next){
            fast=fast->next->next;
            slow=slow->next;
        }
        
        slow->next = reverse(slow->next); 
        slow = slow->next;
        
        while(slow){
            if(slow->val!=head->val){
                return false;
            }
            slow=slow->next;
            head=head->next;
        }
        
        return true;
        
    }
};
