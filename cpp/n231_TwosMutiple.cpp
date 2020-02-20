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
    
    bool isPowerofTwo_a(int n){
        if (n <= 0) return false;
        return (n == (n & (-n)));
    }
};

int main(){
    Solution solu;
    cout << solu.isPowerofTwo(64) << endl;
    cout << solu.isPowerofTwo_a(64) << endl;
}