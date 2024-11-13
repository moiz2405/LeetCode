class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
            int sum=0;

        for(int i =0;i<nums.size();i++){
             int num = i;
             int count1=0;
             while(num>0){
                int rem = num%2;
                if(rem==1){count1++;}
                num/=2;
             }
             if(count1==k){
                  sum +=nums[i];
             }
        }

        return sum;
    }
};