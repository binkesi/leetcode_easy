// https://leetcode-cn.com/problems/binary-tree-tilt/
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
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
    int findTilt(TreeNode* root) {
        calsum(root);
        return tilt;
    }
    
    int calsum(TreeNode* node){
        if (node == NULL) return 0;
        int l = calsum(node -> left);
        int r = calsum(node -> right);
        tilt += abs(l - r);
        return (l + r + (node -> val));
    }
    
private:
    int tilt = 0;
};

int main(){
    return 0;
}