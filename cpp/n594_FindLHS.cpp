// https://leetcode-cn.com/problems/longest-harmonious-subsequence/
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

class Solution {
public:
    int findLHS(vector<int>& nums) {
        int size = nums.size();
        if (size == 0) return 0;
        int i = 0, j = 0, largest = 0;
        sort(nums.begin(), nums.end());
        while (i < size){
            while (i < size && nums[i] - nums[j] <= 1 ) i += 1;
            if (nums[i-1] - nums[j] == 1){ 
                largest = max(largest, i - j);
                while (i < size && nums[i] - nums[j] > 1) j += 1;
            }
            else{
                j = i;
                i += 1;
            }          
        }
        return largest;
    }
};

int main(){
    return 0;
}