// https://leetcode-cn.com/problems/climbing-stairs/
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int climbStairs(int n) {
        vector<int> dp (n, 0);
        dp[0] = 1;
        if (n < 2) return dp[0];
        dp[1] = 2;
        for(int i=2; i < n; ++i) dp[i] = dp[i-2] + dp[i-1];
        return dp[n-1];
    }
};

int main(){
    Solution solu;
    cout << solu.climbStairs(10) << endl;
}