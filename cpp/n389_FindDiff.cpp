// https://leetcode-cn.com/problems/find-the-difference/
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    char findTheDifference(string s, string t) {
        vector<int> res (26, 0);
        for (char i : t)
            res[i - 'a'] += 1;
        for (char j : s)
            res[j - 'a'] -= 1;
        for (size_t i = 0; i < res.size(); ++i){
            if (res[i] == 1)
                return 'a' + i;
        }
        return -1;
    }
};

int main(){
    string s = "abcd";
    string t = "cedab";
    Solution solu;
    cout << solu.findTheDifference(s, t) << endl;
}