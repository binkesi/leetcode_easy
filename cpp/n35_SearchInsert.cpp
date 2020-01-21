// https://leetcode-cn.com/problems/search-insert-position/
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if(nums.size() == 0 || nums[0] > target)return 0;
        for(auto iter = nums.begin(); iter != nums.end(); ++iter){
            if(*iter >= target)return (iter - nums.begin());
        }
        return nums.size();
    }
};

int main(){
    Solution solu;
    vector<int> nums = {1,3,5,6};
    int target = 7;
    cout << solu.searchInsert(nums, target) << endl;
}