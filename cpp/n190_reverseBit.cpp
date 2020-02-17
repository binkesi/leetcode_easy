// https://leetcode-cn.com/problems/reverse-bits/submissions/
#include <iostream>
#include <vector>
using namespace std;

class Solution{
public:
    uint32_t reverseBits(uint32_t n){
        uint32_t res = 0;
        uint32_t reader = (1 << 31);
        uint32_t builder = 1;
        for (int i = 0; i < 32; ++i){
            res += ((n & reader) != 0 ? builder : 0);
            reader = (reader >> 1);
            builder = (builder << 1);
        }
        return res;        
    }
};

int main(){
    Solution solu;
    uint32_t num = 964176192;
    cout << solu.reverseBits(num) << endl;
}