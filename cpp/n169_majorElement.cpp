// https://leetcode-cn.com/problems/majority-element/
#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Solution{
public:
    int majorityElement(vector<int>& nums){
        int thres = nums.size() / 2;
        map <int, int> num_map;
        for (size_t i=0; i < nums.size(); ++i){
            if (num_map.find(nums[i]) == num_map.end()) num_map[nums[i]] = 1;
            else num_map[nums[i]] += 1;
            if (num_map[nums[i]] > thres) return nums[i];
        }
        return 0;
    }
};

int main(){
    vector<int> nums = {2,2,1,1,1,2,2};
    Solution solu;
    cout << solu.majorityElement(nums) << endl;
}