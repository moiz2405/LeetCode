class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {

        if (root == nullptr) {
            return false;
        }

        if (root->left == nullptr && root->right == nullptr) {
            return root->val == targetSum;
        }

        targetSum -= root->val;
        return hasPathSum(root->left, targetSum) || hasPathSum(root->right, targetSum);
    }
};
