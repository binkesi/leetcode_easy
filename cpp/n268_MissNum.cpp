// https://leetcode-cn.com/problems/missing-number/
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        size_t l = nums.size();
        int sum = l * (l + 1)/2;
        for (auto s:nums) sum -= s;
        return sum;
    }
};

int main(){
    vector<int> nums = {0, 5, 3, 4, 1};
    Solution solu;
    cout << solu.missingNumber(nums) << endl;
}