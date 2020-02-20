// https://leetcode-cn.com/problems/contains-duplicate/
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

class Solution{
public:    
    bool containsDuplicate(vector<int>& nums){
        map<int, int> num_map;
        for (size_t i = 0; i < nums.size(); ++i){
            num_map.insert(pair<int, int>(nums[i], i));
        }
        return (num_map.size() != nums.size());
    }
};

int main(){
    Solution solu;
    vector<int> nums = {1, 2, 4, 6, 5, 4};
    cout << solu.containsDuplicate(nums) << endl;
}