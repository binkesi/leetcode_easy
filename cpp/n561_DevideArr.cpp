// https://leetcode-cn.com/problems/array-partition-i/
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

class Solution{
public:
    int arrayPairSum(vector<int>& nums){
        sort(nums.begin(), nums.end());
        int res = 0, i = 0;
        while (i < nums.size()){
            res += nums[i];
            i += 2;
        }
        return res;
    }
};

int main(){
    return 0;
}