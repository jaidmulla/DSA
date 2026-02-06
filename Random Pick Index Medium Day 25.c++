#include<iostream>
#include<vector>
using namespace std;
class solution{
    private:
    vector<int> nums;
    public:
    solution(vector<int>& nums) {
     this->nums=nums;
    }
    int pick(int target){
        int count=0;
        int result=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                count++;
                if(rand()%count==0){
                    result=i;
                }
            }
        }
        return result;
    }
};