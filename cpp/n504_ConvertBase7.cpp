// https://leetcode-cn.com/problems/base-7/
#include <iostream>
using namespace std;

class Solution {
public:
    string convertToBase7(int num) {
        if (num < 0) return ("-" + convertToBase7(-num));
        if (num < 7) return to_string(num);
        return convertToBase7(num / 7) + to_string(num % 7);
    }
};

int main(){
    return 0;
}