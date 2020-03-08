// https://leetcode-cn.com/problems/third-maximum-number/submissions/
#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <algorithm>
using namespace std;

class Solution{
public:
    int thirdMax(vector<int>& nums){
        set<int> s (nums.begin(), nums.end());
        auto it = s.end();
        it--;
        if(s.size() >= 3){
            it--;
            it--;
        }
        return *it;
    }
};

int main(){
    return 0;
}