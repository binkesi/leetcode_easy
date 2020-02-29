// https://leetcode-cn.com/problems/intersection-of-two-arrays-ii/submissions/
#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <algorithm>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        sort (nums1.begin(), nums1.end());
        sort (nums2.begin(), nums2.end());
        vector<int> res;
        size_t i = 0, j = 0;
        while (i < nums1.size() && j < nums2.size()){
            if (nums1[i] == nums2[j]){
                res.push_back(nums1[i]);
                ++i;
                ++j;
            }
            else if (nums1[i] < nums2[j]) ++i;
            else ++j;
        }
        return res;
    }
};

int main(){
    return 0;
}