class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<int> sorted(score);
        sort(sorted.rbegin(), sorted.rend());  
        unordered_map<int, int> rank; 

        for (int i = 0; i < sorted.size(); ++i) {
            rank[sorted[i]] = i + 1;
        }
        
        vector<string> ans;
        for (int n : score) {
            if (rank[n] == 1) {
                ans.push_back("Gold Medal");
            } else if (rank[n] == 2) {
                ans.push_back("Silver Medal");
            } else if (rank[n] == 3) {
                ans.push_back("Bronze Medal");
            } else {
                ans.push_back(to_string(rank[n]));  
            }
        }
        
        return ans;
    }
};
