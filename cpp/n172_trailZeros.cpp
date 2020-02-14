// https://leetcode-cn.com/problems/factorial-trailing-zeroes/submissions/
#include <iostream>
using namespace std;

class Solution{
public:
    int trailingZeroes(int n){
        int num = 0;
        while (n >= 5){
            n = n / 5;
            num += n;
        }
        return num;
    }
};

int main(){
    Solution solu;
    cout << solu.trailingZeroes(52) << endl;
    return 0;
}