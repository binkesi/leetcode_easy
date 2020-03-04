// https://leetcode-cn.com/problems/sum-of-left-leaves/
#include <vector>
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
    int sumOfLeftLeaves(TreeNode* root) {
        if (root == NULL) return 0;
        if (root -> left == NULL) return sumOfLeftLeaves(root -> right);
        if (isLeaf(root -> left)) return (root -> left -> val + sumOfLeftLeaves(root -> right));
        return (sumOfLeftLeaves(root -> left) + sumOfLeftLeaves(root -> right));
    }

private:    
    bool isLeaf(TreeNode* node) {
        if (node -> left == NULL && node -> right == NULL)
            return true;
        else
            return false;
    }
};

int main(){
    return 0;
}