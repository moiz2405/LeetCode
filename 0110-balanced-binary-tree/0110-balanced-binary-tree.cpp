class Solution {
public:
    // Helper function to calculate the height and check if the subtree is balanced
    int checkHeight(TreeNode* node) {
        if (!node) {
            return 0; // Base case: an empty tree has height 0 and is balanced
        }
        
        // Recursively get the height of the left and right subtrees
        int leftHeight = checkHeight(node->left);
        if (leftHeight == -1) return -1; // If the left subtree is not balanced, return -1
        
        int rightHeight = checkHeight(node->right);
        if (rightHeight == -1) return -1; // If the right subtree is not balanced, return -1
        
        // If the current node is not balanced, return -1
        if (abs(leftHeight - rightHeight) > 1) {
            return -1;
        }
        
        // Return the height of the current subtree
        return max(leftHeight, rightHeight) + 1;
    }
    
    bool isBalanced(TreeNode* root) {
        return checkHeight(root) != -1;
    }
};
