// https://leetcode-cn.com/problems/excel-sheet-column-number/solution/
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

class Solution{
public:
    int titleToNumber(string s){
        int num = 0;
        for (size_t i = 0; i < s.size(); ++i){
            num = num + (1 + (s[i] - 'A')) * (pow(26, (-1 + s.size() - i)));
        }
        return num;
    }
};

int main(){
    Solution solu;
    string s = "A";
    cout << solu.titleToNumber(s) << endl;
    return 0;
}