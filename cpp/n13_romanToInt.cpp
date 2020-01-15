// https://leetcode-cn.com/problems/roman-to-integer/
#include <string>
#include <iostream>
#include <unordered_map>
using namespace std;
class Solution {
public:
    int romanToInt(string s) {
        unordered_map<string, int> roman_dict {{"I", 1}, {"V", 5}, {"X", 10}, {"L", 50}, {"C", 100}, {"D", 500}, {"M", 1000}};
        unordered_map<string, int> spec_dict {{"IV", -2}, {"IX", -2}, {"XL", -20}, {"XC", -20}, {"CD", -200}, {"CM", -200}};
        int i = 0;
        int result = 0;
        while(i < s.length()){
            string roman;
            roman += s[i];
            result += roman_dict[roman];
            i++;
        }
        for (auto iter = spec_dict.begin(); iter != spec_dict.end(); iter++){
            string spec = iter -> first;
            int num = iter -> second;
            auto res = s.find(spec);
            if (res != string::npos) result += num;
        }
        return result;
    }
};

int main(){
    Solution solu;
    string s = "MCMXCIV";
    cout << solu.romanToInt(s) << endl;
}