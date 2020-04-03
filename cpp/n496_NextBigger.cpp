// https://leetcode-cn.com/problems/next-greater-element-i/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res = {};
        if (nums2.empty()) return res;
        map<int, int> next_great;
        vector<int> tmp = {nums2[0]};
        for(size_t i = 1; i < nums2.size(); ++i){
            while(!tmp.empty() && nums2[i] > *tmp.rbegin()){
                int item = *tmp.rbegin();
                tmp.pop_back();
                next_great.insert(pair<int, int>(item, nums2[i]));
            }
            tmp.push_back(nums2[i]);
        }
        for(auto t:nums1){
            if (next_great.find(t) != next_great.end())
                res.push_back(next_great[t]);
            else res.push_back(-1);
        }
        return res;
    }
};

int main(){
    return 0;
}