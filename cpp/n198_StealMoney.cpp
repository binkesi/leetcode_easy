// https://leetcode-cn.com/problems/house-robber/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution{
public:
    int StealMoney(vector<int>& nums){
        if (nums.empty()) return 0;
        if (nums.size() == 1) return nums[0];
        if (nums.size() == 2) return max(nums[0], nums[1]);
        vector<int> dp(nums.size());
        dp[0] = nums[0];
        dp[1] = nums[1];
        dp[2] = nums[0] + nums[2];
        for (size_t i = 3; i < dp.size(); ++i){
            dp[i] = max(dp[i-3], dp[i-2]) + nums[i];
        }
        return max(dp[dp.size()-2], dp[dp.size()-1]);
    }
};

int main(){
    Solution solu;
    vector<int> nums = {2,7,9,3,1};
    cout << solu.StealMoney(nums) << endl;
}