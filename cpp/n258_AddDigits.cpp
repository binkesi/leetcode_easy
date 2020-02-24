// https://leetcode-cn.com/problems/add-digits/
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
class Solution {
public:
    int addDigits(int num) {
        int res = num;
        while (res >= 10){
            res = 0;
            while (num > 0){
                res += num % 10;
                num = num / 10;
            }
            num = res;
        }
        return res;
    }
};

int main(){
    return 0;
}