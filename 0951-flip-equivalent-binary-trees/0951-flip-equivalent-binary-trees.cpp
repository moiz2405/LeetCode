class Solution {
public:
    bool flipEquiv(TreeNode* root1, TreeNode* root2) {
        // Base case: both nodes are null, which means they are equivalent
        if (!root1 && !root2) return true;
        
        // If only one of the nodes is null or their values differ, they are not equivalent
        if (!root1 || !root2 || root1->val != root2->val) return false;
        
        // Recursively check:
        // 1. Without flipping: left with left and right with right
        // 2. With flipping: left with right and right with left
        bool noFlip = flipEquiv(root1->left, root2->left) && flipEquiv(root1->right, root2->right);
        bool flip = flipEquiv(root1->left, root2->right) && flipEquiv(root1->right, root2->left);
        
        // Return true if either without flipping or with flipping results in equivalence
        return noFlip || flip;
    }
};
