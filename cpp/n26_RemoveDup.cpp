// https://leetcode-cn.com/problems/remove-duplicates-from-sorted-array/
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() <= 1)return nums.size();
        for(auto iter = nums.begin() + 1; iter != nums.end();){
            if(*iter == *(iter-1))nums.erase(iter-1);
            else ++iter;
        }
        return nums.size();
    }
};

int main(){
    Solution solu;
    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
    cout << solu.removeDuplicates(nums) << endl;
}