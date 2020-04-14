// https://leetcode-cn.com/problems/subtree-of-another-tree/
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
    bool isSubtree(TreeNode* s, TreeNode* t) {
        if (s == NULL and t == NULL) return true;
        if (s == NULL and t != NULL) return false;
        if (s -> val == t -> val && isSame(s, t)) return true;
        return (isSubtree(s -> left, t) || isSubtree(s -> right, t));
    }
    
    bool isSame(TreeNode* s, TreeNode* t){
        if (s == NULL and t == NULL) return true;
        if (s == NULL and t != NULL) return false;
        if (t == NULL and s != NULL) return false;
        return (s -> val == t -> val && isSame(s -> left, t -> left) && isSame(s -> right, t -> right));
    }
};

int main(){
    return 0;
}