// https://leetcode-cn.com/problems/hamming-distance/submissions/
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int hammingDistance(int x, int y) {
        int z = x ^ y;
        int res = 0;
        while (z > 0){
            if (z % 2 != 0) res += 1;
            z = z / 2;
        }
        return res;
    }
};

int main(){
    Solution solu;
    cout << solu.hammingDistance(2, 4) << endl;
}