// https://leetcode-cn.com/problems/balanced-binary-tree/
#include <iostream>
#include <vector>
#include <stack>
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
    bool isBalanced(TreeNode* root) {
        if (root == NULL) return true;
        if (isBalanced(root -> left) && isBalanced(root -> right)) return (abs(maxDeep(root -> left) - maxDeep(root -> right)) < 2);
        else return false;
    }
    
    int maxDeep(TreeNode* root){
        if (root == NULL) return 0;
        stack <pair<TreeNode*, int>> s;
        TreeNode* p = root;
        int max_deep = 0;
        int deep = 0;
        while(!s.empty() || p != NULL){
            while(p != NULL){
                s.push(pair<TreeNode*, int>(p, ++deep));
                p = p -> left;
            }
            p = s.top().first;
            deep = s.top().second;
            if (max_deep < deep) max_deep = deep;
            s.pop();
            p = p -> right;
        }
        return max_deep;
    }
};

int main(){
    return 0;
}