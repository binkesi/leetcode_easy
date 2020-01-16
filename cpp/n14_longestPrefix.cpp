// https://leetcode-cn.com/problems/longest-common-prefix/
#include <string>
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        auto iter = strs.begin();
        if (iter == strs.end()) return "";
        string s = *iter;
        while(++iter != strs.end()){          
            string t = *iter;
            while(t.find(s) != 0) s.pop_back();
        }
        return s;
    }
};

int main(){
    Solution solu;
    vector<string> strs = {"flower","flow","flight"};
    cout << solu.longestCommonPrefix(strs) << endl;
}