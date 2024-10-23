#include <queue>
#include <unordered_map>

class Solution {
public:
    TreeNode* replaceValueInTree(TreeNode* root) {
        if (!root) return nullptr;

        std::queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {
            int levelSize = q.size();
            int levelSum = 0;

            std::vector<TreeNode*> currentLevel;
            for (int i = 0; i < levelSize; ++i) {
                TreeNode* node = q.front();
                q.pop();
                currentLevel.push_back(node);

                if (node->left) q.push(node->left);
                if (node->right) q.push(node->right);
            }

            for (TreeNode* node : currentLevel) {
                if (node->left) levelSum += node->left->val;
                if (node->right) levelSum += node->right->val;
            }

            for (TreeNode* node : currentLevel) {
                int siblingsSum = 0;

                if (node->left) siblingsSum += node->left->val;
                if (node->right) siblingsSum += node->right->val;

                if (node->left) {
                    node->left->val = levelSum - siblingsSum;
                }

                if (node->right) {
                    node->right->val = levelSum - siblingsSum;
                }
            }
        }

        root->val = 0;
        return root;
    }
};
