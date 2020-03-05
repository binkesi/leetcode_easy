// https://leetcode-cn.com/problems/convert-a-number-to-hexadecimal/
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    string toHex(int num) {
        if (num == 0) return "0";
        string hex_str = "0123456789abcdef";
        unsigned int num2 = num;
        int mask = 0b1111;
        string res = "";
        while (num2 > 0){
            char tmp = hex_str[num2 & mask];
            res += tmp;
            num2 >>= 4;
        }
        reverse(res.begin(), res.end());
        return res;
    }
};

int main(){
    return 0;
}