class Solution {
public:
    int findComplement(int num) {
        int num2=num;
        vector<int>arr;
        while(num>0){
            int rem = num%2;
            arr.push_back(rem);
            num/=2;
        }


        int len = arr.size();
        int num1 = pow(2,len)-1;
        int sum = num2^num1;
         return sum;
    }
};