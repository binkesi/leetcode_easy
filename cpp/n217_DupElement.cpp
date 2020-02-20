// https://leetcode-cn.com/problems/contains-duplicate/
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
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
    
    bool containsDuplicate_a(vector<int>& nums){
        set<int> num_set(nums.begin(), nums.end());
        return (num_set.size() != nums.size());
    }
    
    bool containsDuplicate_b(vector<int>& nums){
        if (nums.empty()) return false;
        sort(nums.begin(), nums.end());
        for (size_t i = 0; i < nums.size()-1; ++i){
            if (nums[i] == nums[i+1]) return true;
        }
        return false;
    }
};

int main(){
    Solution solu;
    vector<int> nums = {1, 2, 4, 6, 5, 4};
    cout << solu.containsDuplicate(nums) << endl;
}