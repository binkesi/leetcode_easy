// https://leetcode-cn.com/problems/power-of-three/
#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool isPowerOfThree(int n) {
        if (n <= 0) return false;
        while (n > 1 && n % 3 == 0) n = n / 3;
        return n == 1;
    }
};

int main(){
    Solution solu;
    cout << solu.isPowerOfThree(28) << endl;
}