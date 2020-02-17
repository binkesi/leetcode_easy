// https://leetcode-cn.com/problems/number-of-1-bits/
#include <iostream>
#include <vector>
using namespace std;

class Solution{
public:
    int numOfOne(uint32_t n){
        int num = 0;
        uint32_t builder = 1;
        for (int i = 0; i < 32; ++i) {
            num += ((n & builder) != 0 ? 1 : 0);
            builder = builder << 1;
        }
        return num;       
    }
};

int main(){
    Solution solu;
    uint32_t num = 964176192;
    cout << solu.numOfOne(num) << endl;
}