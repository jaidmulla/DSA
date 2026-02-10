#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int even=0;

        for(int num:nums){
            int digit=0;
            int temp=num;

        while(temp>0){
            digit++;
            temp/=10;
        }
        if(digit % 2==0){
            even++;
        }
        }
        return even;
    }
};