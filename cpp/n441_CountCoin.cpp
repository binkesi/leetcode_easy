// https://leetcode-cn.com/problems/arranging-coins/
#include <algorithm>
#include <math.h>
using namespace std;

class Solution {
public:
    int arrangeCoins(int n) {
        return int(sqrt(double(2*(double)n + 0.25)) - 0.5);
    }
};

int main(){
    return 0;
}
