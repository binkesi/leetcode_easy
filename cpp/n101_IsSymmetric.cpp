// https://leetcode-cn.com/problems/symmetric-tree/
#include <iostream>
#include <vector>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
 
bool isReverse(vector<int> &arr){
    if (arr.empty()) return true;
    int i = 0;
    int j = arr.size() - 1;
    while(j > i){
        if (arr[i] != arr[j]) return false;
        ++i;
        --j;
    }
    return true;
} 
 
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        vector<int> valueQueue = {};
        if (root != NULL) valueQueue.push_back(root -> val);
        vector<TreeNode*> nodeQueue = {root};
        while(!nodeQueue.empty()){
            int length = nodeQueue.size();
            for (int i=0; i < length; ++i){
                TreeNode* node = nodeQueue.front();                             
                if (!valueQueue.empty()) {valueQueue.erase(valueQueue.begin());}
                if (node != NULL){
                    nodeQueue.push_back(node -> left);
                    cout << node->val << endl;
                    if (node -> left != NULL) {valueQueue.push_back(node -> left -> val);}
                    else valueQueue.push_back(-1);
                    nodeQueue.push_back(node -> right);
                    if (node -> right != NULL) valueQueue.push_back(node -> right -> val);
                    else valueQueue.push_back(-1);                                     
                }
                nodeQueue.erase(nodeQueue.begin());
            }
            if (!isReverse(valueQueue)) return false;
        }
        return true;        
    }   
};

int main(){
    vector<int> arr = {3, NULL, NULL, 3};
    cout << isReverse(arr) << endl;
}