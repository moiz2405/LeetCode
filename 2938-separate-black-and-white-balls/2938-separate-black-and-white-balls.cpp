class Solution {
public:
    long long minimumSteps(string s) {
        int whitePosition = 0;
        long long totalSwaps = 0;

        for (int currentPos = 0; currentPos < s.length(); currentPos++) {
            if (s[currentPos] == '0') {

                totalSwaps += currentPos - whitePosition;

                whitePosition++;
            }
        }

        return totalSwaps;
    }
};