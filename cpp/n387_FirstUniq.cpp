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
    
    int firstUniqChar_a(string s) {
        int hash[26] = {0};
        for (char a : s){
            hash[a - 'a'] += 1;
        }
        for (int i = 0; i < s.size(); ++i){
            if (hash[s[i] - 'a'] == 1) return i;
        }
        return -1;
    }
};

int main(){
    string s = "loveleetcode";
    Solution solu;
    cout << solu.firstUniqChar_a(s) << endl;
}