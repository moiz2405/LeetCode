class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
    vector<int>didnt;
   int n=nums.size();


     auto a = unique(nums.begin(),nums.end());

     nums.erase(a,nums.end());

    unordered_set<int>numset(nums.begin(),nums.end());

    for(int i =1;i<=n;i++){
        if(numset.find(i)==numset.end()){
          didnt.push_back(i);
        }
        
    }
    return didnt;
   
    }
    
};