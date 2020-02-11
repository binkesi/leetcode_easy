// https://leetcode-cn.com/problems/two-sum-ii-input-array-is-sorted/
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int iter_h = 0;
        int iter_t = numbers.size() - 1;
        while (iter_h < iter_t){
            if (numbers[iter_h] + numbers[iter_t] == target) return {iter_h+1, iter_t+1};
            if (numbers[iter_h] + numbers[iter_t] < target) iter_h += 1;
            if (numbers[iter_h] + numbers[iter_t] > target) iter_t -= 1;
        }
        return {};
    }
};

int main(){
    return 0;
}