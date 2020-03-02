// https://leetcode-cn.com/problems/first-unique-character-in-a-string/
#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {
        map<char, int> count;
        for (size_t i = 0; i < s.size(); ++i){
            if (count.find(s[i]) == count.end()) count.insert(pair<char, int>(s[i], 1));
            else count[s[i]] += 1;
        }
        for (size_t i = 0; i < s.size(); ++i){
            if (count[s[i]] == 1) return i;
        }
        return -1;
    }
};

int main(){
    string s = "loveleetcode";
    Solution solu;
    cout << solu.firstUniqChar(s) << endl;
}