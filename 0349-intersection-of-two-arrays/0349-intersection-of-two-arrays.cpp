class Solution {
public:
    vector<int> intersection(vector<int>& num1, vector<int>& num2) {
        unordered_set<int> set1(num1.begin(), num1.end()); 
        unordered_set<int> result;  

        for (int num : num2) {
            if (set1.count(num)) {  
                result.insert(num);  
            }
        }

        return vector<int>(result.begin(), result.end());  
    }
};
