#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

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
    long long kthLargestLevelSum(TreeNode* root, int k) {
        if (!root) return -1;

        vector<long long> levelSums; // Vector to store sums of each level
        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {
            int size = q.size();
            long long levelSum = 0; 

            for (int i = 0; i < size; ++i) {
                TreeNode* node = q.front();
                q.pop();
                levelSum += node->val; 
                if (node->left) q.push(node->left);
                if (node->right) q.push(node->right);
            }

            levelSums.push_back(levelSum); 
        }
        sort(levelSums.rbegin(), levelSums.rend());
        if (k <= levelSums.size()) {
            return levelSums[k - 1]; 
        } else {
            return -1; 
        }
    }
};
