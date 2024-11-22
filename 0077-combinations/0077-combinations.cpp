class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>>subsets;
        for(int i = 0;i<(pow(2,n));i++){
            vector<int>subset;
            int num =i;
            for(int j =0;j<n;j++){
                if(num%2==1){
                    subset.push_back(j+1);
                }
                num = num>>1;
            }
            if(subset.size()==k){
                subsets.push_back(subset);
            }
        }
return subsets;
    }
};