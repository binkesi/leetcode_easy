// https://leetcode-cn.com/problems/maximum-subarray/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int cur_sum = nums[0];
        int max_sum = nums[0];
        for(int i = 1; i < n; ++i){
            cur_sum = max(nums[i], cur_sum + nums[i]);
            max_sum = max(cur_sum, max_sum);
        }
        return max_sum;
    }
};

int main(){
    Solution solu;
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    cout << solu.maxSubArray(nums) << endl;
}