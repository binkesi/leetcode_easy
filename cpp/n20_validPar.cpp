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
            if (par.find(*iter) != par.end() && par[*iter] == s[0]) {
                a.pop_back();
                s = s.erase(0, 1);
            }
            else {
                a.push_back(s[0]);                
                s = s.erase(0, 1);
            }
        }
        if (a.empty() == true) return true;
        else return false;
    }
};

int main(){
    Solution solu;
    string s("()[]{}");
    string s1("");
    cout << s1[0] << endl;
    cout << solu.isValid(s) << endl;
}