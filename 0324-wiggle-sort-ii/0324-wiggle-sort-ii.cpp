class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        sort(nums.begin(),nums.end());

 vector<int> result(nums.size());
        int n = nums.size();
        int left = (n + 1) / 2 - 1;  
        int right = n - 1;          
        for (int i = 0; i < n; ++i) {

            if (i % 2 == 1) {
                result[i] = nums[right--];
            } else {
           
                result[i] = nums[left--];
            }
        }
        nums = result;
     //1 2 3 4 
     // 5 6  7 8
     //4 8 3 7 2 6 1 5  
    }
};