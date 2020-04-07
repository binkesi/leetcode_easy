// https://leetcode-cn.com/problems/fibonacci-number/
#include <iostream>
#include <vector>
using namespace std;

class Solution{
public:
    int fib(int N){
        if (N == 0) return 0;
        if (N == 1) return 1;
        return (fib(N - 1) + fib(N - 2));
    }
    
    int fib_a(int N){
        if (N <= 1) return N;
        int dp0 = 0;
        int dp1 = 1;
        int dp2 = 1;
        for (int i = 2; i < N; ++i){
            int tmp = dp1 + dp2;
            dp1 = dp2;
            dp2 = tmp;
        }
        return dp2;
    }
};

int main(){
    return 0;
}