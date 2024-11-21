class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        map<string,int>freq;
      for(int i =0;i<s.size();i++){
        string a = s.substr(i,10);
        freq[a]++;
      }
     vector<string>ans;
      for(auto &c : freq){
        if(c.second>1){
           ans.push_back(c.first);
        }
      }
return ans;
    }
};