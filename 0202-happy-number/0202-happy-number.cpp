#include <cmath>
#include <unordered_set>

class Solution {
public:
    bool isHappy(int n) {
        std::unordered_set<int> seen; 
        
        while (n != 1) {
            int sum = 0;

            while (n > 0) {
                int rem = n % 10;
                sum += pow(rem, 2);
                n /= 10;
            }
            if (seen.count(sum)) {
                return false;
            }

            seen.insert(sum);  
            n = sum;  
        }

        return true; 
    }
};
