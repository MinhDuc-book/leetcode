/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        static bool rs = true;

        if (p == NULL and q == NULL) {
            rs = true;
        }

        else if ((p == NULL and q != NULL) or (p != NULL and q == NULL)) {
            rs = false;
        }

        else if (p != NULL and q != NULL and (p -> val != q -> val)) {
            rs = false;
        }

        // thay vì check từng node của cây con riêng thì cần phải check cả 2 cây con
        // nếu cây con trái thỏa mãn mà cây con phải chưa thỏa mãn thì false
        if ((p != NULL and q != NULL) and (p -> val == q -> val)) {
            rs = isSameTree(p -> left, q -> left) and isSameTree(p -> right, q -> right);     
            
        }

        return rs;
    }
};
