// https://leetcode-cn.com/problems/reverse-vowels-of-a-string/
#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    string reverseVowels(string s) {
        string vowels = "aeiouAEIOU";
        int head = 0;
        int tail = s.size() - 1;
        while (head < tail){
            while ((vowels.find(s[head]) == vowels.npos) && (head < tail))
                head += 1;
            while ((vowels.find(s[tail]) == vowels.npos) && (head < tail))
                tail -= 1;
            if (head < tail){
                swap(s[head], s[tail]);
                head += 1;
                tail -= 1;
            }
        }
        return s;
    }
};

int main(){
    string s = "lEetcOde";
    Solution solu;
    cout << solu.reverseVowels(s) << endl;
}