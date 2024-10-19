class Solution {
public:
    char findKthBit(int n, int k) {
        if (n == 1) {
            return '0';
        }
        int length = (1 << n) - 1;
        int mid = length / 2 + 1;
        if (k == mid) {
            return '1';
        }
        else if (k < mid) {
            return findKthBit(n - 1, k);
        }
        else {
            int corresponding_k = length - k + 1;
            return findKthBit(n - 1, corresponding_k) == '0' ? '1' : '0';
        }
    }
};
