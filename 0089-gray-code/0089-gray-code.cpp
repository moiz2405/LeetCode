#include <vector>
#include <cmath>

class Solution {
public:
    std::vector<int> grayCode(int n) {
        std::vector<int> result;
        int totalCodes = 1 << n; 
        
        for (int i = 0; i < totalCodes; ++i) {
            result.push_back(i ^ (i >> 1)); 
        }
        
        return result;
    }
};
