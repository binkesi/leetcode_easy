// https://leetcode-cn.com/problems/binary-tree-paths/
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
   vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        string str="";
        dfs(root,ans,str);
        return ans;
    }
    void dfs(TreeNode *p,vector<string>&ans,string &s) 
    {
        int len = s.length();
        if(p!=NULL)
        {
            if(len == 0)
            s += "";////保证开头没有->
            else
            s += "->";
            s += to_string(p->val);
        }
        else return;
        if(p->left == NULL && p->right == NULL)
        {
            ans.push_back(s);
        }
        else
        dfs(p->left,ans,s),dfs(p->right,ans,s);
        s.erase(s.begin() + len,s.end());//回溯，删除增加的字符，包括->
       
    }
};

int main(){
    return 0;
}