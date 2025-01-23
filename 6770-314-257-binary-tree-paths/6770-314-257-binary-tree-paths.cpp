class Solution {
public:
    void paths(TreeNode* node, vector<string>& ans, string curr) {

        if (node == NULL) {
            return;
        }
        curr += to_string(node->val);

        if (node->left == NULL and node->right == NULL) {

            ans.push_back(curr);
        } else {
            curr += "->";
            paths(node->left, ans, curr);
            paths(node->right, ans, curr);
        }
    }

    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        if (root == NULL) {
            return ans;
        }

        paths(root, ans, "");

        return ans;
    }
};