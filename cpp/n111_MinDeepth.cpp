// https://leetcode-cn.com/problems/minimum-depth-of-binary-tree/
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
    int minDepth(TreeNode* root) {
        if (root == NULL) return 0;
        if (root -> left == NULL) return minDepth(root -> right) + 1;
        if (root -> right == NULL) return minDepth(root -> left) + 1;
        return min(minDepth(root -> left), minDepth(root -> right)) + 1;
    }
};

int main(){
    return 0;
}