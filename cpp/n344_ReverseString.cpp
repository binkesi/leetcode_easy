// https://leetcode-cn.com/problems/reverse-string/
#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <unordered_map>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        int head = 0;
        int tail = s.size() - 1;
        while (head < tail){
            int tmp = s[head];
            s[head] = s[tail];
            s[tail] = tmp;
            head += 1;
            tail -= 1;
        }
    }
};

int main(){
    Solution solu;
    vector<char> s = {'h','e','l','l','o'};
    solu.reverseString(s);
    for (size_t i = 0; i < s.size(); ++i) cout << s[i] << " ";
}