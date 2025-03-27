class Solution {
private:
    void dfs(int node, vector<int>&vis,vector<vector<int>>&adLst){
        vis[node] = 1;

        for(auto num : adLst[node]){
            if(!vis[num]){
                dfs(num,vis,adLst);
            }
        }
    }

public:
    int findCircleNum(vector<vector<int>>& adMat) {
        //lets convert adjMat to adjList
        int n = adMat.size();
        vector<vector<int>>adLst(n);
        vector<int>vis(n,0);

        for(int i = 0 ; i < n ; i ++){
            for(int j = 0 ; j < n ; j ++){
                if(adMat[i][j] == 1 and i!=j){
                    adLst[i].push_back(j);
                    adLst[j].push_back(i);
                }
            }
        }
        int count = 0;
        for(int i = 0 ; i < n ; i ++){
            if(!vis[i]){
                count ++;
                dfs(i,vis,adLst);
            }
        }
        return count;
    }
};