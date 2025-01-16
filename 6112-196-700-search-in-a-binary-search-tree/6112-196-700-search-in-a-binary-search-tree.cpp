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
    // function to print the subtree staring with val
    vector<TreeNode*> PrintTree(TreeNode* node) {

        vector<TreeNode*> arr;
        
        if(node == NULL){return arr;}

        vector<TreeNode *>leftval = PrintTree(node->left);
        arr.insert(arr.end(), leftval.begin(),leftval.end());
        arr.push_back(node);
        vector<TreeNode *>rightval = PrintTree(node->right);
        arr.insert(arr.end(),rightval.begin(),rightval.end());
                        
        return arr;
    }

    TreeNode* searchBST(TreeNode* root, int val) {
        if(root == NULL){return NULL;}
        
        if (root->val == val) {
           vector<TreeNode *>subtree =  PrintTree(root);
           for(TreeNode * node :subtree){
            cout<<node->val<<" ";
           }
           return root;
        }

        if (val < root->val) {
            return searchBST(root->left, val);
        }
        return searchBST(root->right, val);
    }
};