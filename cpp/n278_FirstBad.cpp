// https://leetcode-cn.com/problems/first-bad-version/
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int left = 1;
        int right = n;
        while (left < right){
            int mid = left/2 + right/2;
            if (isBadVersion(mid) == true) right = mid;
            else left = mid + 1;
        }
        return left;
    }
};

int main(){
    return 0;
}