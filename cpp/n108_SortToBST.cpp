// https://leetcode-cn.com/problems/convert-sorted-array-to-binary-search-tree/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if (nums.empty()) return NULL;
        int mid = nums.size() / 2;
        TreeNode* root = new TreeNode(nums[mid]);
        vector<int> left = {};
        left.assign(nums.begin(), nums.begin()+mid);
        vector<int> right = {};
        right.assign(nums.begin()+mid+1, nums.end());
        root -> left = sortedArrayToBST(left);
        root -> right = sortedArrayToBST(right);
        return root;        
    }
};

int main(){
    return 0;
}