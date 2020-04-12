// https://leetcode-cn.com/problems/student-attendance-record-i/
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
class Solution {
public:
    bool checkRecord(string s) {
        if ((s.find('A') == s.npos || s.find('A') == s.rfind('A')) && s.find("LLL") == s.npos)
            return true;
        else
            return false;
    }
};

int main(){
    return 0;
}