#include<iostream>
using namespace std;
class Solution {
public:
    string toHex(int num) {
        if (num == 0) return "0";

        string hex = "0123456789abcdef";
        string ans = "";
        unsigned int n = num;

        while (n) {
            ans = hex[n & 15] + ans;
            n >>= 4;
        }

        return ans;
    }
};