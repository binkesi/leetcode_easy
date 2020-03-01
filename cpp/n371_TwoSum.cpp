// https://leetcode-cn.com/problems/sum-of-two-integers/
#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <algorithm>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int getSum(int a, int b) {
        while (b != 0){
            int temp = a ^ b;
            b = ((unsigned int) (a & b) << 1);
            a = temp;
        }
        return a;
    }
};

int main(){
    Solution solu;
    cout << solu.getSum(45, 89) << endl;
}