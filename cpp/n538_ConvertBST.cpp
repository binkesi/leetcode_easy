// https://leetcode-cn.com/problems/convert-bst-to-greater-tree/
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
    TreeNode* convertBST(TreeNode* root) {
        if (root != NULL){
            convertBST(root -> right);
            total += root -> val;
            root -> val = total;
            convertBST(root -> left);
        }
        return root;
    }
    
private:
    int total = 0;
};

int main(){
    return 0;
}