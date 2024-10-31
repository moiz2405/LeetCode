#include <vector>
#include <algorithm>
#include <limits.h>

using namespace std;

class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int n = nums.size();
        if (n < 2) return 0;

        int minVal = *min_element(nums.begin(), nums.end());
        int maxVal = *max_element(nums.begin(), nums.end());


        int bucketSize = max(1, (maxVal - minVal) / (n - 1)); 
        int bucketCount = (maxVal - minVal) / bucketSize + 1; 

        vector<int> bucketMin(bucketCount, INT_MAX);
        vector<int> bucketMax(bucketCount, INT_MIN);

        for (int num : nums) {
            int bucketIndex = (num - minVal) / bucketSize; 
            bucketMin[bucketIndex] = min(bucketMin[bucketIndex], num); 
            bucketMax[bucketIndex] = max(bucketMax[bucketIndex], num); 
        }

        int maxGap = 0;
        int previousMax = minVal;

        for (int i = 0; i < bucketCount; i++) {
            if (bucketMin[i] == INT_MAX) continue; 
            maxGap = max(maxGap, bucketMin[i] - previousMax); 
            previousMax = bucketMax[i]; 
        }

        return maxGap;
    }
};
