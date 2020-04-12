// https://leetcode-cn.com/problems/diameter-of-binary-tree/
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
//Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        res = 1;
        depth(root);
        return res - 1;
    }
    
private:
    int res;
    int depth(TreeNode* node){
        if (node == NULL) return 0;
        int L = depth(node -> left);
        int R = depth(node -> right);
        res = max(res, L+R+1);
        return max(L, R) + 1;
    }
};

int main(){
    return 0;
}