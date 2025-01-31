#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size(); 
        int cnt = 0;

        for (int i = 0; i < n; i++) {
            int low = 0, high = m - 1;
            while (low <= high) {
                int mid = low + (high - low) / 2;
                if (grid[i][mid] < 0) {
                    high = mid - 1;
                } else {
                    low = mid + 1;
                }
            }
            cnt += (m - low); 
        }

        return cnt;
    }
};