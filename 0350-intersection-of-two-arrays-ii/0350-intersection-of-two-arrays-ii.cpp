class Solution {
public:
    vector<int> intersect(std::vector<int>& nums1, std::vector<int>& nums2) {
    std::unordered_map<int, int> count;
    std::vector<int> result;
    for (int num : nums1) {
        count[num]++;
    }
    for (int num : nums2) {
        if (count[num] > 0) {
            result.push_back(num);
            count[num]--; 
        }
    }

    return result;
}
    
};