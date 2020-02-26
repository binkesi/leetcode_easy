// https://leetcode-cn.com/problems/bulls-and-cows/
#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <unordered_map>
using namespace std;

class Solution {
public:
    string getHint(string secret, string guess) {
        int num_a = 0;
        int num_b = 0;
        unordered_map<char, int> word;
        for (size_t i = 0; i < secret.size(); ++i){
            if (secret[i] == guess[i]) num_a += 1;
            else if (!word.count(secret[i])) word[secret[i]] = 1;
            else word[secret[i]] += 1;
        }
        for (size_t i = 0; i < secret.size(); ++i){
            if (secret[i] == guess[i]) continue;
            else if (word.count(guess[i]) && word[guess[i]] >= 1){
                num_b += 1;
                word[guess[i]] -= 1;
            }
        }
        string res = to_string(num_a) + "A" + to_string(num_b) + "B";
        return res;
    }
};

int main(){
    string secret = "1807";
    string guess = "7810";
    Solution solu;
    cout << solu.getHint(secret, guess) << endl;
}