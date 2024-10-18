class Solution {
public:
    int countMaxOrSubsets(vector<int>& nums) {
        int maxOr = 0;
        int count = 0;
        for (int num : nums) {
            maxOr |= num;
        }
        function<void(int, int)> backtrack = [&](int index, int currentOr) {
            if (index == nums.size()) {
                if (currentOr == maxOr) {
                    count++;
                }
                return;
            }
            backtrack(index + 1, currentOr | nums[index]);
            backtrack(index + 1, currentOr);
        };
        backtrack(0, 0);
        
        return count;
    }
};
