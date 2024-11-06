class Solution {
public:
   bool isPerfectSquare(int num) {
    if (num < 2) {
        return true;  
    }
    
    int left = 2, right = num / 2;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        long long mid_square = (long long)mid * mid;
        
        if (mid_square == num) {
            return true;
        } else if (mid_square < num) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    
    return false;
}
};