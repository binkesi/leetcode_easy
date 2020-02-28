// https://leetcode-cn.com/problems/intersection-of-two-arrays/
#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        unordered_map<int, int> inter_map;
        for (size_t i = 0; i < nums1.size(); ++i){
            inter_map.insert(pair<int, int>(nums1[i], 1));
        }
        for (size_t i = 0; i < nums2.size(); ++i){
            if (inter_map[nums2[i]] == 1){
                res.push_back(nums2[i]);
                inter_map[nums2[i]] = 0;
            }
        }
        return res;
    }
};

int main(){
    vector<int> nums1 = {4, 9, 5};
    vector<int> nums2 = {9, 4, 9, 8, 4};
    Solution solu;
    vector<int> res = solu.intersection(nums1, nums2);
    for (size_t i = 0; i < res.size(); ++i) cout << res[i] << " ";
    cout << endl;
}