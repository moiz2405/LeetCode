#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> numStrs;
        for (int num : nums) {
            numStrs.push_back(to_string(num));
        }
        sort(numStrs.begin(), numStrs.end(), [](const string& a, const string& b) {
            return a + b > b + a;
        });
        
        if (numStrs[0] == "0") {
            return "0";
        }
        
        string result;
        for (const string& str : numStrs) {
            result += str;
        }
        
        return result;
    }
};
