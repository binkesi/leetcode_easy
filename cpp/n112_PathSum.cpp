// https://leetcode-cn.com/problems/path-sum/
#include <iostream>
#include <vector>
#include <stack>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    bool hasPathSum(TreeNode* root, int sum) {
        if (root == NULL) return false;
        if (root -> left == NULL && root -> right == NULL) return sum == root -> val;
        return hasPathSum(root -> left, sum - (root -> val)) || hasPathSum(root -> right, sum - (root -> val));
    }
    
    bool dfs_hasPathSum(TreeNode* root, int sum) {
        if (root == NULL) return false;
        int path_sum = 0;
        stack <pair<TreeNode*, int>> node_stack;
        TreeNode* p = root;
        while (!node_stack.empty() || p != NULL){
            while (p != NULL){
                path_sum += p -> val;
                node_stack.push(pair<TreeNode*, int>(p, path_sum));
                p = p -> left;
            }
            p = node_stack.top().first;
            path_sum = node_stack.top().second;
            node_stack.pop();            
            if (p -> left == NULL && p -> right == NULL && path_sum == sum) return true;          
            p = p -> right;
        }
        return false;
    }
};

int main(){
    return 0;
}