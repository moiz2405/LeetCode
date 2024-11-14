class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
         unordered_map<int, int> freq;
         vector<int>arr;
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }
        for(auto q : freq){
            if(q.second ==1){
                arr.push_back(q.first);
            }
        }
         return arr;
    }
};