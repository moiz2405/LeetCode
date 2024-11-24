class Solution {
public:
    bool canPlaceFlowers(vector<int>& bed, int n) {
        int count = 0;
        int size = bed.size();
        if (bed[0] == 0 && (size == 1 || bed[1] == 0)) {
            count++;
            bed[0] = 1;  
        }
        if (size > 1 && bed[size - 1] == 0 && bed[size - 2] == 0) {
            count++;
            bed[size - 1] = 1;  
        }
        for (int i = 1; i < size - 1; i++) {
            if (bed[i] == 0 && bed[i - 1] == 0 && bed[i + 1] == 0) {
                count++;
                bed[i] = 1;  
            }
        }

        return count >= n;
    }
};
