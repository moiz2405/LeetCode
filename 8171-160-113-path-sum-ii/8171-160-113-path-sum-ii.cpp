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
    vector<vector<int>>arr;
    vector<int>current;
    
    //funciton to add the path to 2d vecotr
    void paths(TreeNode *node, int targetsum){
        if(node == NULL){return;}

        current.push_back(node->val);
        
        if(node->left == NULL and node->right == NULL and node->val == targetsum){
           arr.push_back(current);
        }
        else{
        paths(node->left, targetsum - node->val);
        paths(node->right, targetsum - node->val);
        }
        current.pop_back();
    }

    vector<vector<int>> pathSum(TreeNode* root, int targetsum) {
        if(root == NULL){return arr;}
        arr.clear();
        current.clear();

        paths(root, targetsum);
        return arr;
    }
};