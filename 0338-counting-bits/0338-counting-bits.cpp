class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>arr;
      for(int i =0;i<=n;i++){
        int count1=0;
             int num =i;
             while(num>0){
                  int rem = num%2;
                  if(rem==1){ count1++;}
                  num/=2;
             }
             arr.push_back(count1);
      }
          return arr;
    }
};