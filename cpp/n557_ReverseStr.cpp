// https://leetcode-cn.com/problems/reverse-words-in-a-string-iii/submissions/
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cstring>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        if (s == "") return s;
        string ret;
        vector<string> v = split(s, " ");
        for (auto& i: v){
            reverse(i.begin(), i.end());
            ret += i + " ";
        }
        ret.erase(ret.end() - 1);
        return ret;
    }
    
    vector<string> split(const string& s, const char* c){
        vector<string> res;
        int len = s.size();
        char *p = new char[len+1];
        char *psave = NULL;
        strcpy(p, s.c_str());
        char * tok = strtok_r(p, c, &psave);
        while (tok){
            string tmp(tok);
            res.push_back(tmp);
            tok = strtok_r(NULL, c, &psave);
        }
        delete []p;
        return res;        
    }
};

int main(){
    return 0;
}