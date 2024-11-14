class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int, int>freq;
        
        for(int i =0;i<nums.size();i++){
            freq[nums[i]]++;
        }
        int ans=0;
        for(auto a : freq){
            if(a.second>1){
                ans = a.first;
                break;
            }
        }
        return ans;
    }
};