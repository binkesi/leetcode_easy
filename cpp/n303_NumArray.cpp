// https://leetcode-cn.com/problems/range-sum-query-immutable/
#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <unordered_map>
using namespace std;

class NumArray {
public:
    NumArray(vector<int>& nums) {
        if (nums.empty()) return;
        dp.insert(dp.begin(), nums.size(), 0);
        dp[0] = nums[0];
        for (size_t i = 1; i < nums.size(); ++i){
            dp[i] = dp[i-1] + nums[i];
        }
    }
    
    int sumRange(int i, int j) {
        if (i == 0) return dp[j];
        else return (dp[j] - dp[i-1]);
    }

private:
    vector<int> dp;
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(i,j);
 */
 
int main(){
    vector<int> nums = {-2,0,3,-5,2,-1};
    NumArray* obj = new NumArray(nums);
    int param_1 = obj->sumRange(0,2);
    cout << param_1 << endl;
}