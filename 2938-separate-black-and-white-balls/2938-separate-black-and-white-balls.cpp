class Solution {
public:
    long long minimumSteps(string s) {
        int whitePosition = 0;
        long long totalSwaps = 0;

        // Iterate through each ball (character) in the string
        for (int currentPos = 0; currentPos < s.length(); currentPos++) {
            if (s[currentPos] == '0') {
                // Calculate the number of swaps needed
                // to move it to the leftmost available position
                totalSwaps += currentPos - whitePosition;

                // Move the next available position for a white ball one step to
                // the right
                whitePosition++;
            }
        }

        return totalSwaps;
    }
};