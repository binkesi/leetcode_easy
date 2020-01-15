// https://leetcode-cn.com/problems/palindrome-number/
#include <string>
#include <iostream>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        string y = to_string(x);
        int i = 0;
        while (i < (y.length())/2){
            if( y[i] != y[y.length()-1-i])return false;
            i++;
        }
        return true;
    }
    
    bool isPalindrome_nostr(int x){
        if(x < 0)return false;
        long res = 0; // notice when x reversed, it may overflow int type.
        int y = x;
        while(y != 0){
            res = res * 10 + y % 10;
            y /= 10;
        }
        if(x == res) return true;
        else return false;
    }
    
    bool isPalindrome_half(int x){
        if(x < 0) return false;
        if(x == 0) return true;
        if(x % 10 == 0) return false;        
        int res = 0;
        int y = x;
        while (y > res){
            res = res * 10 + y % 10;
            y /= 10;
        }
        if (y == res || y == res/10) return true;
        else return false;
    }
};

int main(){
    Solution solu;
    cout << solu.isPalindrome(1234321) << endl;
    cout << solu.isPalindrome_nostr(100) << endl;
    cout << solu.isPalindrome_half(100) << endl;    
}