// https://leetcode-cn.com/problems/max-consecutive-ones/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int res = 0, tmp = 0;
        for(auto num:nums){
            if (num == 1) tmp += 1;
            else{
                res = max(res, tmp);
                tmp = 0;
            }
        }
        res = max(res, tmp);
        return res;
    }
};

int main(){
    return 0;
}