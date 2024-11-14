class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> freq;
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }
int ans;
        for(auto q : freq){
            if(q.second ==1){
                ans = q.first;
            }
        }
         return ans;

    }
};