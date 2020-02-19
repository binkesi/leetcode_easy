// https://leetcode-cn.com/problems/isomorphic-strings/
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

class Solution {
public:
    string restruct(string s){
        string res = "";
        char symbol = 'a';
        map <char, char> str_map;
        for (size_t i = 0; i < s.size(); ++i){
            if (str_map.find(s[i]) == str_map.end()){
                str_map[s[i]] = symbol;
                symbol += 1;
            }
            res += str_map[s[i]];
        }
        return res;
    }
    
    bool isIsomorphic(string s, string t) {
        return restruct(s) == restruct(t);
    }
};

int main(){
    Solution solu;
    string s = "edg";
    string t = "add";
    cout << solu.isIsomorphic(s, t) << endl;
}