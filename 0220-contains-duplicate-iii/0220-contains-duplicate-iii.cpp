
class Solution {
public:
    bool containsNearbyAlmostDuplicate(std::vector<int>& nums, int indexDiff, int valueDiff) {
        std::set<long> window; 
        for (int i = 0; i < nums.size(); i++) {
            if (i > indexDiff) {
                window.erase(nums[i - indexDiff - 1]); 
            }
            auto pos = window.lower_bound((long)nums[i] - valueDiff);
     
            if (pos != window.end() && *pos <= (long)nums[i] + valueDiff) {
                return true;
            }
            window.insert(nums[i]); 
        }
        return false; 
    }
};
