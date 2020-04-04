// https://leetcode-cn.com/problems/find-mode-in-binary-search-tree/
// Definition for a binary tree node.
#include <iostream>
#include <vector>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    vector<int> findMode(TreeNode* root) {
        vector<int> lis;
        if (root == NULL) return lis;
        TransTree(root, lis);
        vector<int> res;
        int max_count = 0;
        int cur_count = 1;
        for (size_t i = 1; i <= lis.size(); ++i){
            if (i == lis.size() || lis[i] != lis[i-1]){
                if (cur_count > max_count){
                    res.clear();
                    res.push_back(lis[i-1]);
                    max_count = cur_count;
                }
                else if (cur_count == max_count) res.push_back(lis[i-1]);
                cur_count = 1;
            }
            else cur_count += 1;
        }
        return res;
    }
    
    void TransTree(TreeNode* root, vector<int>& lis){
        if (root == NULL) return;
        TransTree(root -> left, lis);
        lis.push_back(root -> val);
        TransTree(root -> right, lis);
    }
};

int main(){
    return 0;
}