// https://leetcode-cn.com/problems/construct-the-rectangle/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;

class Solution {
public:
    vector<int> constructRectangle(int area) {
        int w = sqrt(area);
        while(area % w != 0) w -= 1;
        int l = area / w;
        vector<int> res = {l, w};
        return res;
    }
};

int main(){
    return 0;
}