class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
      for(int n : nums){
        freq[n]++;
      }
      vector<pair<int, int>> arr(freq.begin(), freq.end());

        sort(arr.begin(), arr.end(), [](const auto& a, const auto& b) {
            return a.second > b.second;
        });
        
        vector<int> result;
        for (int i = 0; i < k && i < arr.size(); i++) {
            result.push_back(arr[i].first); 
        }
        
        return result; 
       

    }
};