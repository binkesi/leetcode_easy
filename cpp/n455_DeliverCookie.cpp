// https://leetcode-cn.com/problems/assign-cookies/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int i = 0, j = 0, count = 0;
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        while(i < g.size() && j < s.size()){
            if (g[i] <= s[j]) {
                count += 1;
                i += 1;
                j += 1;
            }
            else j += 1;
        }
        return count;
    }
};

int main(){
    return 0;
}