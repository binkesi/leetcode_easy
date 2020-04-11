// https://leetcode-cn.com/problems/reverse-string-ii/
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
class Solution {
public:
    string reverseStr(string s, int k) {
        for (size_t i = 0; i < s.size(); i += 2*k){
            if(i + k < s.size())
                reverse(s.begin()+i, s.begin()+i+k);
            else
                reverse(s.begin()+i, s.end());
        }
        return s;
    }
};

int main(){
    return 0;
}