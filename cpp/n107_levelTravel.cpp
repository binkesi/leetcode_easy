// https://leetcode-cn.com/problems/binary-tree-level-order-traversal-ii/
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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> level_trav = {};
        if (root == NULL) return level_trav;
        vector<TreeNode*> cur_queue = {};
        cur_queue.push_back(root);
        while(!cur_queue.empty()){
            vector<TreeNode*> next_queue = {};
            vector<int> cur_lev = {};
            while(!cur_queue.empty()){
                TreeNode* cur_node = cur_queue.front();
                cur_queue.erase(cur_queue.begin());
                cur_lev.push_back(cur_node -> val);
                if (cur_node -> left != NULL) next_queue.push_back(cur_node -> left);
                if (cur_node -> right != NULL) next_queue.push_back(cur_node -> right);
            }
            level_trav.push_back(cur_lev);
            cur_queue = next_queue;
        }
        reverse(level_trav.begin(), level_trav.end());
        return level_trav;
    }
};

int main(){
    return 0;
}