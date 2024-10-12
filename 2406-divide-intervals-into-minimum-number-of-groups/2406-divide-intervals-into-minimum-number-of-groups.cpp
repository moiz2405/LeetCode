class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {
        vector<pair<int, int>> events;
        for (const auto& interval : intervals) {
            events.push_back({interval[0], 1}); 
            events.push_back({interval[1] + 1, -1}); 
        }
        sort(events.begin(), events.end());
        
        int currentGroups = 0;
        int maxGroups = 0;
        for (const auto& event : events) {
            currentGroups += event.second;
            maxGroups = max(maxGroups, currentGroups);
        }
        
        return maxGroups;
    }
};
