// https://leetcode-cn.com/problems/contains-duplicate-ii/
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
using namespace std;

class Solution{
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k){
        map<int, int> num_map;
        for (size_t i = 0; i < nums.size(); ++i){
            if (num_map.find(nums[i]) != num_map.end()){
                if (i - num_map[nums[i]] <= k) return true;
            }
            num_map[nums[i]] = i;
        }
        return false;
    }
};

int main(){
    vector<int> nums = {1, 2, 4, 5, 6, 1, 7};
    int k = 5;
    Solution solu;
    cout << solu.containsNearbyDuplicate(nums, k) << endl;
}