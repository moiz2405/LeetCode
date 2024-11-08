class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        vector<int> answer;
        int n = nums.size();

        int totalXor = 0;
        for (int num : nums) {
            totalXor ^= num;
        }

        int maxXorValue = (1 << maximumBit) - 1;

        for (int i = 0; i < n; i++) {
            answer.push_back(totalXor ^ maxXorValue);
            totalXor ^= nums[n - 1 - i]; 
        }

        return answer;
    }
};
