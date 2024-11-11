#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return {};


        sort(nums.begin(), nums.end());


        vector<int> dp(n, 1);  
        vector<int> prev(n, -1); 

        int maxIndex = 0; 


        for (int i = 1; i < n; i++) {
            for (int j = 0; j < i; j++) {
                if (nums[i] % nums[j] == 0 && dp[i] < dp[j] + 1) {
                    dp[i] = dp[j] + 1;
                    prev[i] = j;
                }
            }
            if (dp[i] > dp[maxIndex]) {
                maxIndex = i;
            }
        }

        vector<int> largestSubset;
        for (int i = maxIndex; i >= 0; i = prev[i]) {
            largestSubset.push_back(nums[i]);
            if (prev[i] == -1) break;
        }

        reverse(largestSubset.begin(), largestSubset.end()); 
        return largestSubset;
    }
};