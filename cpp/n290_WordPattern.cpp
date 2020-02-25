// https://leetcode-cn.com/problems/word-pattern/
#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <unordered_map>
using namespace std;

class Solution {
public:   
    bool wordPattern(string pattern, string str) {
        vector<string> words = split(str, ' ');
        vector<char> pat (pattern.begin(), pattern.end());
        return (symbolize(words) == symbolize(pat));            
    }

private:
    template <typename T>
    vector<char> symbolize (const vector<T>& v){
        char index = '@';
        unordered_map<T, char> dict;
        vector<char> res;
        for (auto &item : v){
            if (!dict.count(item)) dict[item] = index++;
            res.push_back(dict[item]);
        }
        return res;
    }
    
    vector<string> split (string& str, char delimer){
        istringstream iss(str);
        vector<string> res;
        string item;
        while (getline(iss, item, delimer))
            res.push_back(item);
        return res;
    }    
};

int main(){
    Solution solu;
    string str = "dog cat abc";
    string pat = "abb";
    cout << solu.wordPattern(pat, str) << endl;
}