// https://leetcode-cn.com/problems/perfect-number/
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <math.h>
using namespace std;

class Solution {
public:
    bool checkPerfectNumber(int num) {
        if (num <= 1) return false;
        int res = 1;
        for (int i = 2; i < int(sqrt(num))+1; ++i){
            if (num % i == 0) res = res + i + num/i;
        }
        cout << res;
        return (num == res);
    }
};

int main(){
    return 0;
}