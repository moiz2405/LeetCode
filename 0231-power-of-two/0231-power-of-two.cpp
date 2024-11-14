class Solution {
public:
    bool isPowerOfTwo(int n) {
        int count=0;
        while(n>0){
            n =n&(n-1);
            count++;
        }
        if(count==1){return true;}
        else{return false;}
    }
};