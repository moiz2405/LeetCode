class Solution {
public:
    int solve(vector<int>&arr){
        int n = arr.size();
        vector<int>lm(n);    
        vector<int>rm(n);
        int answer =0;

        lm[0] = arr[0];    
        rm[n-1] = arr[n-1];
        
        for(int i =1;i<n;i++){
            lm[i] = max(lm[i-1],arr[i]);
        }    
        for(int i =n-2;i>=0;i--){
            rm[i] = max(rm[i+1] , arr[i]);
        }
        for(int i =0;i<n;i++){
        answer +=(min(lm[i],rm[i]) - arr[i]);
        }

        return answer;
    }

    int trap(vector<int>& height) {
        int result = solve(height);
        return result;
    }
};