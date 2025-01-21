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
    int sum =0;
    void nodes(TreeNode *node){
        if(node == NULL){return;}
        sum++;

        nodes(node->left);
        nodes(node->right);
    }

    int countNodes(TreeNode* root) {
        if(root == NULL){return sum;}

        nodes(root);
        
        return sum;
    }
};