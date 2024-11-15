class Solution {
public:
    bool hasAlternatingBits(int n) {
        vector<int>arr;
        while(n>0){
            int rem = n%2;
            arr.push_back(rem);
            n/=2;
        }
      for(int i=1;i<arr.size();i++){
        if(arr[i-1]==arr[i]){
            return false;
        }
      }
      return true;

    }
};