class Solution {
private:
    bool can_repair_all(long long time,vector<int>&ranks,int cars) {
        long long total_cars_repaired = 0;
        for (int rank : ranks) {
            total_cars_repaired += sqrt(time / rank);
            if (total_cars_repaired >= cars) return true;
        }
        return false;
    };

public:
    long long repairCars(vector<int>& ranks, int cars) {
        long long left = 1, right = (long long)*min_element(ranks.begin(), ranks.end()) * cars * cars;
        
        while (left < right) {
            long long mid = (left + right) / 2;
            if (can_repair_all(mid,ranks,cars)) {
                right = mid;
            } else {
                left = mid + 1;
            }
        }
        
        return left;
    }
};