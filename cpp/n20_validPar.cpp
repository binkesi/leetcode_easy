// https://leetcode-cn.com/problems/valid-parentheses/
#include <vector>
#include <string>
#include <iostream>
#include <map>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        map<char, char> par;
        par['('] = ')';
        par['['] = ']';
        par['{'] = '}';
        vector<char> a;
        if(s == "") return true;
        while(s != ""){
            if(a.empty() == true){
                a.push_back(s[0]);
                s = s.erase(0, 1);
            }           
            auto iter = a.end()-1;
            if (par[*iter] == s[0]) a.pop_back();
            else {
                s = s.erase(0, 1);
                a.push_back(s[0]);
            }
            cout << *iter << endl;
        }
        if (a.empty() == true) return true;
        else return false;
    }
};

int main(){
    Solution solu;
    string s("()[]{}");
    cout << solu.isValid(s) << endl;
}