// https://leetcode-cn.com/problems/move-zeroes/
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void swap(int i, int j, vector<int>& nums){
        int tmp = nums[i];
        nums[i] = nums[j];
        nums[j] = tmp;
    }
    
    void moveZeroes(vector<int>& nums) {
        for (size_t i = 1; i < nums.size(); ++i){
            while (i > 0 && nums[i] != 0 && nums[i-1] == 0){
                swap(i, i-1, nums);
                i -= 1;
            }
        }
    }
    
    void moveZeroes_a(vector<int>& nums) {
        int last_not_zero = 0;
        for (size_t i = 0; i < nums.size(); ++i){
            if (nums[i] != 0){
                swap(last_not_zero, i, nums);
                last_not_zero += 1;
            }
        }
    }
};

int main(){
    return 0;
}