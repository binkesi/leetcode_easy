// https://leetcode-cn.com/problems/nim-game/submissions/
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

class Solution {
public:
    bool canWinNim(int n) {
        return (n % 4 != 0);
    }
};

int main(){
    Solution solu;
    cout << solu.canWinNim(25) << endl;
}