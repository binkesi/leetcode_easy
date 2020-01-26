// https://leetcode-cn.com/problems/length-of-last-word/
#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Solution {
public:
    int lengthOfLastWord(string s) {
        if(s == "")return 0;
        int beg_spa = 0;
        int word_len = 1;
        for(auto iter = s.end()-1; iter != s.begin();){
            if(beg_spa == 0 && *iter == ' '){
                s.erase(iter);
                --iter;
                continue;
            }
            beg_spa = 1;
            --iter;
            if(*iter != ' ')word_len += 1;
            else break;
        }
        if(beg_spa == 0 && s[0] == ' ')return 0;
        else return word_len;
    }
};

int main(){
    Solution solu;
    string s = " a ";
    cout << solu.lengthOfLastWord(s) << endl;
}