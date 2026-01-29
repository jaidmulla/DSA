#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n);

        int left = 0;
        int right = n - 1;
        int pos = n - 1;

        while (left <= right) {
            int leftsq = nums[left] * nums[left];
            int rightsq = nums[right] * nums[right];

            if (leftsq > rightsq) {
                result[pos] = leftsq;
                left++;
            } else {
                result[pos] = rightsq;
                right--;
            }
            pos--;
        }
        return result;
    }
};

int main() {
    Solution sol;

    vector<int> nums = {-4, -1, 0, 3, 10};

    vector<int> ans = sol.sortedSquares(nums);

    cout << "Output: ";
    for (int x : ans) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
