#include<unordered_map>
#include<vector>
using namspace std;
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