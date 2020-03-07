// https://leetcode-cn.com/problems/fizz-buzz/
#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
using namespace std;

class Solution{
public:
    vector<string> fizzBuzz(int n){
        map <int, string> game = {{3, "Fizz"}, {5, "Buzz"}};
        vector<string> res;
        for (int i = 1; i <= n; ++i){
            string ele = "";
            if (i % 3 == 0) ele += game[3];
            if (i % 5 == 0) ele += game[5];
            else if (ele == "") ele += to_string(i);
            res.push_back(ele);
        }
        return res;
    }
};

int main(){
    Solution solu;
    for (auto s:solu.fizzBuzz(18)) cout << s << endl;
}