// https://leetcode-cn.com/problems/sqrtx/
#include <iostream>
using namespace std;
class Solution {
public:
    int mySqrt(int x) {
        if(x == 1) return 1;
        int left = 0;
        int right = x/2;
        while(left < right){
            long long mid = (left + right + 1) >> 1;
            if (mid * mid <= x) left = mid;
            else right = mid - 1;
        }
        return left;
    }
};

int main(){
    Solution solu;
    cout << solu.mySqrt(16) << endl;
}