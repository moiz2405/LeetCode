class Solution {
public:
    int countPartitions(vector<int>& arr) {
        int total_sum = 0;
        for(int &x : arr){
            total_sum += x;
        }
        int total_pairs = 0;
        int currentsum = 0;
        int remsum = 0;
        for(int i =0;i<arr.size()-1;i++){
            currentsum +=arr[i];
            remsum = total_sum - currentsum;

            if((remsum - currentsum)% 2 == 0){
                total_pairs ++;
            }

        }

        return total_pairs;
    }
};