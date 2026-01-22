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
    int minDepth(TreeNode* root) {
        int minDep = 0;

        if (root == NULL) {
            return 0;
        }

        int minLeft = minDepth(root -> left);
        int minRight = minDepth(root -> right);


        if (minLeft + 1 == 1) {
            minDep = minRight;
        } else if (minRight + 1 == 1) {
            minDep = minLeft;
        } else {
            minDep = min(minLeft, minRight);
        }

        return minDep + 1;

    }

};
