class Solution {
public:
    int maximumGap(vector<int>& nums) {
        sort(nums.begin(),nums.end());
      int num=0,maxdiff=0;
       
      for(int i =1;i<=nums.size()-1;i++){
        
        int maxdiff = nums[i] - nums[i-1];
        num = max(num,maxdiff);
      }

        // num = max(num,maxdiff);
        return num;
    }
};