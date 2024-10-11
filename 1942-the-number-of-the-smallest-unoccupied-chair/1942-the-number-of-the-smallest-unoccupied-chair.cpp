#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

class Solution {
public:
    int smallestChair(vector<vector<int>>& times, int targetFriend) {
        int n = times.size();
        priority_queue<int, vector<int>, greater<int>> availableChairs;
        
        for (int i = 0; i < n; ++i) {
            availableChairs.push(i);
        }
        
        vector<pair<int, int>> events;  
        
        for (int i = 0; i < n; ++i) {
            events.push_back({times[i][0], i}); 
            events.push_back({times[i][1], ~i}); 
        }
        
        sort(events.begin(), events.end());
        
        vector<int> chairAssigned(n, -1);
        
        for (auto& event : events) {
            int time = event.first;
            int friendIdx = event.second;
            
            if (friendIdx >= 0) { 
                int chair = availableChairs.top();
                availableChairs.pop();
                
                chairAssigned[friendIdx] = chair;
                if (friendIdx == targetFriend) {
                    return chair;
                }
            } else { 
                friendIdx = ~friendIdx;
                availableChairs.push(chairAssigned[friendIdx]);
            }
        }
        
        return -1; 
    }
};
