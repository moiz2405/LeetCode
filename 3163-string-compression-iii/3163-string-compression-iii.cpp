#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string compressedString(string word) {
        string comp; 
        int n = word.length();
        int i = 0;

        while (i < n) {
            char c = word[i]; 
            int count = 0;
            while (i < n && word[i] == c && count < 9) {
                count++;
                i++;
            }
            comp += to_string(count) + c;
        }

        return comp;
    }
};