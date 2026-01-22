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
    int maxDepth(TreeNode* root) {
        int maxDep = 0;
        
        if (root == NULL) {
            return 0;
        }

        if (root -> left == NULL and root -> right == NULL) {
            return 1;
        }

        int maxLeft = maxDepth(root->left);
        int maxRight = maxDepth(root->right);
        maxDep = max(maxLeft, maxRight);

        return maxDep+1;

        /*
        VD: [3,9,20,null,null,15,7]

        Nó sẽ bắt đầu tại 3:
            - Kiểm tra điều kiện base case thấy kh khớp
            - Chạy đến maxLeft:
                + maxDepth(đỉnh 9): Kiểm tra điều kiện base case thấy trả về 1
                + maxLeft = 1
            - Chạy  đến maxRight:
                + maxDepth(đỉnh 20): Kiểm tra điều kiện base case kh khớp:
                    * maxLeft tại 15: Kiểm tra base case khớp trả về 1
                    * maxRight tại 7: Kiểm tra base case khớp trả về 1
                    * maxDep = max(...)+1 = 2
                +maxRight = 2
            - maxDep = max(...) + 1 = 2 + 1 = 3

        */
    }
};
