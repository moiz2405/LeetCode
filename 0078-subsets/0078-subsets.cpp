class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>subsets;
        for(int i =0;i<pow(2,nums.size());i++){
           vector<int>subset;
            int num =i;
        for(int j =0;j<nums.size();j++){
                
                if(num%2==1){
                    subset.push_back(nums[j]);
                }
                num = num>>1;
                sort(subset.begin(),subset.end());
        }
        subsets.push_back(subset);
        }
    // for(auto set : subsets){
    //     for(int s : set){
    //         cout<<s;
    //     }
    // }
return subsets;
    }
};