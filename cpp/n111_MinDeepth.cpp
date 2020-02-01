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
    
    int bfs_minDepth(TreeNode* root){
        if (root == NULL) return 0;
        int min_deep = 0;
        vector<TreeNode*> bfs_queue = {};
        bfs_queue.push_back(root);
        while (!bfs_queue.empty()){
            vector<TreeNode*> next_queue = {};
            min_deep += 1;
            while (!bfs_queue.empty()){
                TreeNode* cur_node = bfs_queue.front();
                bfs_queue.erase(bfs_queue.begin());
                if (cur_node -> left == NULL && cur_node -> right == NULL) return min_deep;
                if (cur_node -> left != NULL) next_queue.push_back(cur_node -> left);
                if (cur_node -> right != NULL) next_queue.push_back(cur_node -> right);
            }
            bfs_queue = next_queue;
        }
        return 0;
    }
};

int main(){
    return 0;
}