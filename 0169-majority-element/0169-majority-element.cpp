class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // Sort the array
        std::sort(nums.begin(), nums.end());
        
        // Return the middle element (since the majority element must appear at the middle)
        return nums[nums.size() / 2];
    }
};
