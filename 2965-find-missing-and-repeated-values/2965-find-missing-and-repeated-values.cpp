class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        map<int, int>freq;
        int size = grid.size()*grid.size();
       for(int i =0;i<grid.size();i++){
       for(int j =0;j<grid.size();j++){
          freq[grid[i][j]]++;
       }
       }
       vector<int>arr;
       int sum=0;
       for(auto &a : freq){
        sum+=a.first;
        if(a.second==2){
            arr.push_back(a.first);
        }
       }
       int num = (size*(size+1))/2;
       arr.push_back(num-sum);
return arr;

    }
};