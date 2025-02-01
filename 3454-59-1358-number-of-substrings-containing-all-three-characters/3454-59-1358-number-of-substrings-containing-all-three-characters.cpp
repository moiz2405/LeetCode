class Solution {
public:
    int numberOfSubstrings(string s) {
        
        unordered_map<char,int>freq;
        int count = 0;
        int  j = 0;
        for(int i = 0; i <= s.size(); i++){
            freq[s[i]]++;

            while(freq['a']>0 and freq['b']>0 and freq['c']>0){
                count += s.size()-i;
                freq[s[j]]--;
                j++;
            }
        }

        return count;
    }
};