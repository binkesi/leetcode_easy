#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        for(size_t i = 0; i < nums.size(); ++i){
            int ind = abs(nums[i]) - 1;
            if (nums[ind] > 0) nums[ind] *= -1;
        }
        vector<int> res = {};
        for(size_t i = 0; i < nums.size(); ++i){
            if (nums[i] > 0) res.push_back(i + 1);
        }
        return res;
    }
};

int main(){
    return 0;
}