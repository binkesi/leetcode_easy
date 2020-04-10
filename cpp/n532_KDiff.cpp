// https://leetcode-cn.com/problems/k-diff-pairs-in-an-array/
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;
class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        if (k < 0) return 0;
        set<int> saw;
        set<int> diff;
        for (auto num: nums){
            if (saw.find(num-k) != saw.end()) diff.insert(num-k);
            if (saw.find(num+k) != saw.end()) diff.insert(num);
            saw.insert(num);
        }
        return diff.size();
    }
};

int main(){
    return 0;
}