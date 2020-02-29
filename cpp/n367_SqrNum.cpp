// https://leetcode-cn.com/problems/valid-perfect-square/
#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <algorithm>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool isPerfectSquare(int num) {
        int minu = 1;
        while (num > 0){
            num -= minu;
            minu += 2;
        }
        return num == 0;
    }
};

int main(){
    Solution solu;
    cout << solu.isPerfectSquare(25) << endl;
}