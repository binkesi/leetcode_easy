// https://leetcode-cn.com/problems/longest-uncommon-subsequence-i/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int findLUSlength(string a, string b) {
        if (a == b) return -1;
        else return(max(a.size(), b.size()));
    }
};

int main(){
    return 0;
}