#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int mwater=0;
        int lp=0,rp=height.size()-1;

        while(lp<rp){
            int w=rp-lp;
            int ht = min(height[lp],height[rp]);
            int curwater=w*ht;
            mwater=max(mwater,curwater);

            height[lp]<height[rp]?lp++ : rp--;
        }
        return mwater;
        
    }
};