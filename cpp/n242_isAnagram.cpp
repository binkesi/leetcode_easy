// https://leetcode-cn.com/problems/valid-anagram/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        return s == t;
    }
};

int main(){
    return 0;
}