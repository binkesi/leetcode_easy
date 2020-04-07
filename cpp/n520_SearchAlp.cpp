// https://leetcode-cn.com/problems/detect-capital/
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool detectCapitalUse(string word) {
        if (word.size() == 1) return true;
        if (isupper(word[0])){
            int tmp = isupper(word[1]);
            if (word.size()==2) return true;
            for (int i = 2; i < word.size(); ++i)
                if (isupper(word[i]) != tmp) return false;
            return true;
        }
        else{
            for (int i = 1; i < word.size(); ++i)
                if (isupper(word[i])) return false;
            return true;
        }
    }
};

int main(){
    return 0;
}