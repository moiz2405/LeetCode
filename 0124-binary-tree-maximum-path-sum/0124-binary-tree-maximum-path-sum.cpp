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
int maxi = INT_MIN;

     int findmaxsum(TreeNode *node, int &maxi){
        if(node == NULL){return 0;}
           int current = node->val; 
         int leftsum = max(0, findmaxsum(node->left,maxi));
         int rightsum = max(0, findmaxsum(node->right,maxi));

      maxi = max(leftsum + rightsum + node->val,maxi);

      return max(leftsum,rightsum) + node->val;
     }

    int maxPathSum(TreeNode* root) {
          
        findmaxsum(root,maxi);
      
      return maxi;
    }
};