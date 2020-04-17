// https://leetcode-cn.com/problems/range-addition-ii/
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        if (ops.size() == 0) return m * n;
        int wide = 0, high = 0;
        for (auto op: ops){
            if (wide == 0) wide = op[0];
            else wide = min(wide, op[0]);
            if (high == 0) high = op[1];
            else high = min(high, op[1]);            
        }
        return wide * high;
    }
};

int main(){
    return 0;
}