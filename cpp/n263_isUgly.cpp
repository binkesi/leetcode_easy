// https://leetcode-cn.com/problems/ugly-number/submissions/
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution{
public:
    bool isUgly(int num){
        while (num % 2 == 0) num /= 2;
    }
}