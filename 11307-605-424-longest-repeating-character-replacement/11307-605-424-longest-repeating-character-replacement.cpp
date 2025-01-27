class Solution {
public:
    int characterReplacement(string s, int k) {
        
        int maxfreq =0;
        int right = 0, left = 0;
        unordered_map<int,int>freq;
        int ans = 0;
        while(right < s.size()){
            freq[s[right]]++;
            maxfreq = max(maxfreq, freq[s[right]]);

            while( (right - left + 1) - maxfreq > k ){
                freq[s[left]]--;
                left++;
            }
            ans = max(ans, right - left + 1);
            right++;
        }

        return ans;
    }
};