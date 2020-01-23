// https://leetcode-cn.com/problems/count-and-say/
#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Solution {
public:
    string countAndSay(int n) {
        if(n == 1){
            string say = "1";
            return say;
        }
        string last_say = countAndSay(n-1);
        string this_say = "";
        int num = 1;
        for(int i = 0; i < last_say.size(); ++i){
            if(i > 0 && last_say[i] != last_say[i-1]){
                this_say = this_say + to_string(num) + last_say[i-1];
                num = 1;
            }
            if(i > 0 && last_say[i] == last_say[i-1]) ++num;
        }
        this_say = this_say + to_string(num) + last_say[last_say.size()-1];
        return this_say;
    }
};

int main(){
    Solution solu;
    cout << solu.countAndSay(1) << endl;
    cout << solu.countAndSay(2) << endl;
    cout << solu.countAndSay(3) << endl;
    cout << solu.countAndSay(4) << endl;
    cout << solu.countAndSay(5) << endl;
}