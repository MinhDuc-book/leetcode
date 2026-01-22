class Solution {
public:
    // kiểm tra xem node đấy có đối xứng gương chưa
    bool isMirror(TreeNode* a, TreeNode* b) {
        if (a == NULL && b == NULL) return true;
        if (a == NULL || b == NULL) return false;
        if (a->val != b->val) return false;

    //checktrái của a với phải của b VÀ trái của b và phải của a (vì 1 node có 2 con trái phải)
        return isMirror(a->left, b->right) && isMirror(a->right, b->left);
    }

    bool isSymmetric(TreeNode* root) {
        if (root == NULL) return true;
        return isMirror(root->left, root->right);
    }
};
