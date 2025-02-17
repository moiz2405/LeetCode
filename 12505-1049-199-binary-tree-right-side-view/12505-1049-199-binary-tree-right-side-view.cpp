class Solution {
public:
    void solve(TreeNode *root, vector<int>&answer){
        if(!root){return;}
        
        queue<TreeNode *>q;
        q.push(root);

        while(!q.empty()){
            int n = q.size();
            vector<int>arr;
            for(int i = 0; i < n ; i++){
                TreeNode *curr = q.front();
                q.pop();

                if(i == n-1){

                    answer.push_back(curr->val);
                }
                
                if(curr->left){q.push(curr->left);}
                if(curr->right){q.push(curr->right);}
            }
        }
    }

    vector<int> rightSideView(TreeNode* root) {
        vector<int>answer;
        if(!root){return answer;}

        solve(root,answer);

        return answer;
    }
};