// https://leetcode-cn.com/problems/implement-strstr/
#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        return haystack.find(needle);
    }
};

int main(){
    Solution solu;
    string haystack = "hello";
    string needle = "ll";
    cout << solu.strStr(haystack, needle) << endl;
}