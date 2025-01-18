/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode* t1 = new TreeNode(val);

        if (root == NULL) {
            return t1;
        }

        if ((t1->val > root->val) and !(root->right)) {
            root->right = t1;
        }
        if ((t1->val < root->val) and !(root->left)) {
            root->left = t1;
        }

        if (t1->val > root->val) {
            insertIntoBST(root->right, val);
        }
        if (t1->val < root->val) {
            insertIntoBST(root->left, val);
        }
        return root;
    }
};