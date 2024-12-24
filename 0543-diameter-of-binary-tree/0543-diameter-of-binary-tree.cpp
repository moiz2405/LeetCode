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
    int maxi =0;
    int depth(TreeNode *node){
        if(node == NULL){return 0;}

        int left = depth(node->left);
        int right = depth(node->right);
           
           maxi = max(maxi, left+right);
           return max(left,right) +1;
    }

    int diameterOfBinaryTree(TreeNode* root) {
       int diameter = depth(root);
        return maxi;
    }
};