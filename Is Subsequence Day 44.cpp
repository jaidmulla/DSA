#include<iostream>
using namespace std;
class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0;

        for (char c : t) {
            if (i < s.size() && c == s[i]) {
                i++;
            }
            if (i == s.size()) return true;
        }

        return s.empty();
    }
};