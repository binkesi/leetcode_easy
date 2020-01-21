// https://leetcode-cn.com/problems/remove-element/
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if(nums.size() == 0)return 0;
        for(auto iter = nums.begin(); iter != nums.end();){
            if(*iter == val){
                iter = nums.erase(iter);
            }
            else ++iter;
        }
        return nums.size();
    }
};

int main(){
    Solution solu;
    vector<int> nums = {0,1,2,2,3,0,4,2};
    int val = 2;
    cout << solu.removeElement(nums, val) << endl;
}