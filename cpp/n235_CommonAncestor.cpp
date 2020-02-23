// https://leetcode-cn.com/problems/lowest-common-ancestor-of-a-binary-search-tree/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        int root_val = root -> val;
        int left_val = min(p -> val, q -> val);
        int right_val = max(p -> val, q -> val);
        if (left_val <= root_val && root_val <= right_val) return root;
        if (left_val < root_val && right_val < root_val) return lowestCommonAncestor(root -> left, p, q);
        if (left_val > root_val && right_val > root_val) return lowestCommonAncestor(root -> right, p, q);
        return NULL;
    }
};

int main(){
    return 0;
}