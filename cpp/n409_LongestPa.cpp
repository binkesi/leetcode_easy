// https://leetcode-cn.com/problems/longest-palindrome/
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    int longestPalindrome(string s) {
        vector <int> sli(58, 0); // 注意asicc码中‘Z’到‘a’中间还有六个特殊字符，所以长度要58
        int res = 0, odd = 0;
        for (auto i : s){
            int ind = i - 'A';
            sli[ind] += 1;
        }
        for (size_t j = 0; j < sli.size(); ++j){
            if (sli[j] % 2 == 0) res += sli[j];
            else{
                odd = 1;
                res = res + sli[j] - 1;
            }
        }
        return (res + odd);
    }
};

int main(){
    Solution solu;
    string s = "AAAaaacderDER";
    cout << solu.longestPalindrome(s) << endl;
}