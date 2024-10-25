#include <vector>
#include <string>
#include <algorithm>

class Solution {
public:
    std::vector<std::string> removeSubfolders(std::vector<std::string>& folder) {
        std::sort(folder.begin(), folder.end());
        
        std::vector<std::string> result;
        for (const auto& f : folder) {

            if (result.empty() || f.find(result.back() + "/") != 0) {
                result.push_back(f);
            }
        }
        
        return result;
    }
};
