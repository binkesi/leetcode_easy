// https://leetcode-cn.com/problems/merge-sorted-array/
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int p1 = m - 1;
        int p2 = n - 1;
        int p = m + n - 1;
        while(nums1[p] == 0 && p2 >= 0){
            if (p1 < 0){
                for (int i = 0; i <= p2; ++i) nums1[i] = nums2[i];
                break;
            }
            if (nums2[p2] >= nums1[p1]){
                nums1[p] = nums2[p2];
                p2 -= 1;
            }
            else{
                nums1[p] = nums1[p1];
                nums1[p1] = 0;
                p1 -= 1;
            }
            p -= 1;            
        }       
    }
};

int main(){
    Solution solu;
    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    int m = 3;
    vector<int> nums2 = {2, 5, 6};
    int n = 3;
    solu.merge(nums1, m, nums2, n);
    for(int i=0; i < nums1.size(); ++i) cout << nums1[i] << endl;
}