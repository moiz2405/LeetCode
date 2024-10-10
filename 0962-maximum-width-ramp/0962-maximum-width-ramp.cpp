#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxWidthRamp(vector<int>& nums) {
        stack<int> s;
        int maxWidth = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (s.empty() || nums[i] < nums[s.top()]) {
                s.push(i); 
            }
        }
        for (int i = nums.size() - 1; i >= 0; i--) {
            while (!s.empty() && nums[i] >= nums[s.top()]) {
                maxWidth = max(maxWidth, i - s.top());  
                s.pop();  
            }
        }
        
        return maxWidth; 
    }
};
