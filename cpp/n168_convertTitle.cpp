// https://leetcode-cn.com/problems/excel-sheet-column-title/
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    string convertToTitle(int n) {
        string res = "";
        while (n > 0){
            int mod = (n - 1) % 26;
            res += ('A' + mod);
            n = (n - 1) / 26;
        }
        reverse(res.begin(), res.end());
        return res;
    }
};

int main(){
    Solution solu;
    cout << solu.convertToTitle(562) << endl;
    return 0;
}