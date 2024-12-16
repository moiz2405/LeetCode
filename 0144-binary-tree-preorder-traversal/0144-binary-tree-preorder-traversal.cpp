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
    vector<int> preorderTraversal(TreeNode* root) {
        
        vector<int>preorder;
        if(root == NULL){
            return preorder;
        }
        stack<TreeNode *>s;
        s.push(root);
       while(!s.empty()){
       int size = s.size();
       TreeNode *t1 = s.top();
       s.pop();

            preorder.push_back(t1->val);
            if(t1->right!=NULL){
                s.push(t1->right);
            }
            if(t1->left!=NULL){
                s.push(t1->left);
            }
              
       }

return preorder;
    }
};