class Solution {
public:
    int romanToInt(string s) {
        int count = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == 'I') {
                if (i + 1 < s.length() && s[i + 1] == 'V') {
                    count += 4;
                    i++;
                } else if (i + 1 < s.length() && s[i + 1] == 'X') {
                    count += 9;
                    i++;
                } else {
                    count += 1;
                }
            } else if (s[i] == 'X') {
                if (i + 1 < s.length() && s[i + 1] == 'L') {
                    count += 40;
                    i++;
                } else if (i + 1 < s.length() && s[i + 1] == 'C') {
                    count += 90;
                    i++;
                } else {
                    count += 10;
                }
            } else if (s[i] == 'C') {
                if (i + 1 < s.length() && s[i + 1] == 'D') {
                    count += 400;
                    i++;
                } else if (i + 1 < s.length() && s[i + 1] == 'M') {
                    count += 900;
                    i++;
                } else {
                    count += 100;
                }
            } else if (s[i] == 'V') {
                count += 5;
            } else if (s[i] == 'L') {
                count += 50;
            } else if (s[i] == 'D') {
                count += 500;
            } else if (s[i] == 'M') {
                count += 1000;
            }
        }
        return count;
    }
};
