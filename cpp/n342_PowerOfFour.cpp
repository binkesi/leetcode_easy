// https://leetcode-cn.com/problems/power-of-four/

#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool isPowerOfThree(int num) {
        if (num <= 0) return false;
        while (num > 1 && num % 4 == 0) num = num / 4;
        return num == 1;
    }
};

int main(){
    Solution solu;
    cout << solu.isPowerOfThree(28) << endl;
}