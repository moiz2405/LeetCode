class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string a = s+s;
        bool ans = true;

        if(a.substr(1,a.size()-2).find(s)==string::npos){
             return false;
        }
        return ans;
    }
};