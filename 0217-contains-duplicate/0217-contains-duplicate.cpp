class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        bool ans = false;
        int count =1;
        for(int i =1;i<nums.size();i++){
            if(nums[i-1]==nums[i]){
                ans = true;
                // count++;
            }
        }
        // if(count>1){
        //         ans = true;
        // }
         return ans;
    }
};