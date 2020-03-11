// https://leetcode-cn.com/problems/path-sum-iii/
#include <iostream>
#include <vector>
#include <string>
#include <set>
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
    int pathSum(TreeNode* root, int sum) {
        if (root == NULL) return 0;
        return (rootSum(root, sum) + pathSum(root -> left, sum) + pathSum(root -> right, sum));
    }
    
    int rootSum(TreeNode* root, int sum) {
        if (root == NULL) return 0;
        int res = 0;
        int tmp = root -> val;
        if (sum == tmp) res = 1;
        return (res + rootSum(root -> left, sum - tmp) + rootSum(root -> right, sum - tmp));
    }
};

int main(){
    return 0;
}