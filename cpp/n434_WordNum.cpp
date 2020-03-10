// https://leetcode-cn.com/problems/number-of-segments-in-a-string/
#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <algorithm>
using namespace std;

class Solution{
public:
    int countSegments(string s){
        if (s == "") return 0;
        int res = 0;
        for (size_t i = 0; i < s.size(); ++i){
            if ((i == 0 || s[i-1] == ' ') && s[i] != ' ')
                res += 1;
        }
        return res;
    }
};

int main(){
    return 0;
}