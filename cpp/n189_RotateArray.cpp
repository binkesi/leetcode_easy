// https://leetcode-cn.com/problems/rotate-array/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution{
public:
    void rotate(vector<int>& nums, int k){
        int length = nums.size();
        k = k % length;
        reverse(&nums[0], &nums[length]);
        reverse(&nums[0], &nums[k]);
        reverse(&nums[k], &nums[length]);
    }
};

int main(){
    return 0;
}