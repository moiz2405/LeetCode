#include <vector>
using namespace std;

class Solution {
public:
    vector<int> numOfBurgers(int tomatoSlices, int cheeseSlices) {
        int total_jumbo = (tomatoSlices - 2 * cheeseSlices) / 2;
        int total_small = cheeseSlices - total_jumbo;

        if (total_jumbo >= 0 && total_small >= 0 && 
            4 * total_jumbo + 2 * total_small == tomatoSlices && 
            total_jumbo + total_small == cheeseSlices) {
            return {total_jumbo, total_small};
        }
        
        return {}; 
    }
};
