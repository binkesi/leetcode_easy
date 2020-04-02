// https://leetcode-cn.com/problems/number-complement/
#include <iostream>
#include <vector>
using namespace std;

class Solution{
public:
    int FindComplement(int num){
        int res = 0;
        long base = 1;
        while(num > 0){
            int tmp = 1 - (num % 2);
            res += tmp * base;
            base *= 2;
            num /= 2;
        }
        return res;
    }
};

int main(){
    return 0;
}