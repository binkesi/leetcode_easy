// https://leetcode-cn.com/problems/shortest-unsorted-continuous-subarray/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int start = 0;
        int end = nums.size() - 1;
        vector<int> tmp(nums);
        sort(nums.begin(), nums.end());
        while (start <= end){
            if (nums[start] != tmp[start]) break;
            start += 1;
        }
        while (end >= 0){
            if (nums[end] != tmp[end]) break;
            end -= 1;
        }
        return max(0, end-start+1);
    }
};

int main(){
    return 0;
}