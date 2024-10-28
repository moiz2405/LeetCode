#include <vector>
#include <unordered_set>
#include <algorithm>
#include <cmath>
#include <iostream>

class Solution {
public:
    int longestSquareStreak(std::vector<int>& nums) {
        std::unordered_set<int> squaresSet(nums.begin(), nums.end()); 
        int longestStreak = 0;

        for (int num : nums) {
            int streakLength = 0;
            long long current = static_cast<long long>(num); 

            while (squaresSet.count(current)) {
                streakLength++;

                long long nextSquare = current * current; 
             
                if (nextSquare > INT_MAX) break; 
                
                current = nextSquare; 
            }

            longestStreak = std::max(longestStreak, streakLength);
        }

        return longestStreak >= 2 ? longestStreak : -1; 
    }
};
