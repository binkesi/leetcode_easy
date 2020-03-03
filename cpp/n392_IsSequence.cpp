// https://leetcode-cn.com/problems/is-subsequence/
#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0, j = 0;
        int s1 = s.size();
        int s2 = t.size();
        if (s1 == 0) return true;
        while(i <= s1){
            while (t[j] != s[i]){
                j += 1;
                if (j > s2) return false;
            }
            i += 1;
            j += 1;
        }
        return true;
    }
};

int main(){
    return 0;
}