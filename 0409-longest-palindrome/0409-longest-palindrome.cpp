class Solution {
public:
    int longestPalindrome(string s) {
        
        map<char,int>freq;
        for(char c :s){
            freq[c]++;
        }
        int length=0;
         bool odd = false;
        for(auto &a : freq){
            if((a.second)%2==0){
                length+=a.second;
            }
            else {
                length += a.second - 1;  
                odd = true;  
            }
        }
        if(odd){length+=1;}

      return length;
    }
};