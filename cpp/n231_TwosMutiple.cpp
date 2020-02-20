// https://leetcode-cn.com/problems/power-of-two/
#include <iostream>
#include <vector>
using namespace std;

class Solution{
public:
    bool isPowerofTwo(int n){
        if (n <= 0) return false;
        while (n % 2 == 0) n = n / 2;
        return (n == 1);
    }
};

int main(){
    Solution solu;
    cout << solu.isPowerofTwo(64) << endl;
}