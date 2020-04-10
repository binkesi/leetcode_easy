// https://leetcode-cn.com/problems/minimum-absolute-difference-in-bst/
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
    int getMinimumDifference(TreeNode* root) {
        vector<int> tree_val;
        TreeList(root, tree_val);
        if (tree_val.size() == 1) return 0;
        int min_res = tree_val[1] - tree_val[0];
        for (size_t i = 2; i < tree_val.size(); ++i)
            min_res = min(min_res, tree_val[i] - tree_val[i-1]);
        return min_res;
    }
    
    void TreeList(TreeNode* root, vector<int>& tree_val){
        if (root == NULL) return;
        TreeList(root -> left, tree_val);
        tree_val.push_back(root -> val);
        TreeList(root -> right, tree_val);
    }
};

int main(){
    return 0;
}