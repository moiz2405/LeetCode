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
    TreeNode* invertTree(TreeNode* root) {
        if(root == NULL){return root;}

        //store the left node and switch it up with right node 
        //need to do this for all subtrees 
        //so need to travel to all subtrees
        //once to left subtree

        TreeNode *t = root->left;
        root->left = root->right;
        root->right = t;


        invertTree(root ->left);
        invertTree(root ->right);

        return root;
    }
};