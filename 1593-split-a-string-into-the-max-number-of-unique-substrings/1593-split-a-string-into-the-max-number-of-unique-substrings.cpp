class Solution {
public:
    int maxUniqueSplit(string s) {
        return backtrack(s, 0, unordered_set<string>());
    }
    
private:
    // Helper function for backtracking
    int backtrack(const string &s, int start, unordered_set<string> used) {
        if (start == s.length()) {
            return used.size();  // Return the number of unique substrings found
        }
        
        int max_splits = 0;  // Store the maximum number of unique substrings
        for (int end = start + 1; end <= s.length(); ++end) {
            string substring = s.substr(start, end - start);  // Extract the substring
            if (used.find(substring) == used.end()) {  // Check if the substring is unique
                used.insert(substring);  // Add the substring to the set
                max_splits = max(max_splits, backtrack(s, end, used));  // Recursively explore further
                used.erase(substring);  // Backtrack and remove the substring from the set
            }
        }
        
        return max_splits;
    }
};
