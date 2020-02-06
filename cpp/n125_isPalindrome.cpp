// https://leetcode-cn.com/problems/valid-palindrome/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        for (size_t i = 0; i < s.size();){
            if (!isalnum(s[i])) s.erase(i, 1);
            else i += 1;
        }
        s.erase(remove(s.begin(), s.end(), ' '), s.end());
        transform(s.begin(), s.end(), s.begin(), ::tolower); 
        string tmp = s;
        reverse(s.begin(), s.end());
        cout << s << endl << tmp;
        if (s == tmp) return true;
        else return false;        
    }
};

int main(){
    return 0;
}