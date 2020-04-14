// https://leetcode-cn.com/problems/reshape-the-matrix/
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        if (nums.empty() || nums[0].empty()) return nums;
        int R = nums.size();
        int C = nums[0].size();
        int N = R * C;
        if (N % r != 0 || N / r != c) return nums;
        vector<vector<int> > res(r, vector<int>(c, 0));
        for (int i = 0; i < N; ++i) {
            res[i / c][i % c] = nums[i / C][i % C];
        }
        return res;
    }
};

int main(){
    return 0;
}