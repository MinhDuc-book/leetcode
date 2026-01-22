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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> rs;
        
        if (root == nullptr) {
            return rs;
        }

        vector<int> leftSide = inorderTraversal(root->left); // tại từng đỉnh đưa toàn bộ giá trị node cây con bên trái của đỉnh đó vào
        rs.insert(rs.end(), leftSide.begin(), leftSide.end()); // đẩy kết quả của leftSide vào rs

        rs.push_back(root->val); // tại từng đỉnh đưa giá trị đỉnh đó vào

        vector<int> rightSide = inorderTraversal(root->right); // tiếp tục với các cây con bên phải tại từng đỉnh
        rs.insert(rs.end(), rightSide.begin(), rightSide.end()); // chèn cây con bên phải đó vào rs

        return rs;
    }
};
