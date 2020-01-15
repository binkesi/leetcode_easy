// https://leetcode-cn.com/problems/two-sum/
#include<unordered_map>
#include<vector>
#include<iostream>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> record;
        for(int i = 0 ; i < nums.size() ; i ++){
            if(record.find(target-nums[i]) != record.end() && record[target-nums[i]] != i){
                int j = record[target-nums[i]];
                vector<int> result = {j, i};
                return result;
            }
            record[nums[i]] = i;
        }
        return {-1, -1};
    }
};

int main(){
    vector<int> nums = {1, 4, 7, 9, 12, 3, 2};
    int target = 11;
    Solution solu;
    vector<int> result = solu.twoSum(nums, target);
    cout << "[" << result[0] << ", " << result[1] << "]" << endl;
};