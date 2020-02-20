// https://leetcode-cn.com/problems/invert-binary-tree/
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
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
    TreeNode* invertTree(TreeNode* root) {
        if (root == NULL) return NULL;
        TreeNode* tmp = root -> left;
        root -> left = root -> right;
        root -> right = tmp;
        invertTree(root -> left);
        invertTree(root -> right);
        return root;
    }
};

int main(){
    return 0;
}