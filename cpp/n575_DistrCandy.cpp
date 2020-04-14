// https://leetcode-cn.com/problems/distribute-candies/
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <set>
#include <map>
using namespace std;

class Solution {
public:
    int distributeCandies(vector<int>& candies) {
        set<int> tmp;
        for(auto i: candies) tmp.insert(i);
        return min(candies.size()/2, tmp.size());
    }
};

int main(){
    return 0;
}