class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string result = "";
        int spaceIndex = 0;

        for (int i = 0; i < s.size(); i++) {
            if (spaceIndex < spaces.size() && i == spaces[spaceIndex]) { // Compare directly with `spaces[spaceIndex]`
                result += " "; // Add a space
                spaceIndex++;  // Move to the next space index
            }
            result += s[i]; // Add the current character
        }

        return result;
    }
};
