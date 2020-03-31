// https://leetcode-cn.com/problems/repeated-substring-pattern/
#include <iostream>
#include <algorithm>
#include <string>

class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        return (s + s).find(s, 1) != s.size();
    }
};

int main(){
    return 0;
}