class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n  = nums.size();
       int total = (n*(n+1))/2;
       int sum =0;
        for(int i=0; i<nums.size() ; i++){
            sum += nums[i];
        }

        return total -sum;
    }
};