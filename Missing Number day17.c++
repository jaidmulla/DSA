#include <vector>
using namespace std;
class Solution{
public:

    int missingNumber(vector<int>& nums){
        int res = 0;
        int n =nums.size();
        
        for(int i=0; i<nums.size(); i++){
            res^=i;
            res^=nums[i];
        }
            res^=n;
return res;
    }
};