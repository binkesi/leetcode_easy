// https://leetcode-cn.com/problems/guess-number-higher-or-lower/submissions/
#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <algorithm>
#include <unordered_map>
using namespace std;
// Forward declaration of guess API.
// @param num, your guess
// @return -1 if my number is lower, 1 if my number is higher, otherwise return 0
int guess(int num);

class Solution {
public:
    int guessNumber(int n) {
        int l = 1;
        int r = n;
        while(l <= r){
            int mid = l + (r -l) / 2; //相当于（l+r）/2，但用这种写法能防止溢出
            int g = guess(mid);
            if(g == 0)  return mid;
            else if(g == -1) r = mid - 1;
            else if(g == 1) l = mid + 1;
        }
        return 0;
    }
};

int main(){
    return 0;
}