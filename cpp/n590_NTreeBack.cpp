// https://leetcode-cn.com/problems/n-ary-tree-postorder-traversal/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};

class Solution {
public:
    vector<int> postorder(Node* root) {
        if (root == NULL) return order_list;
        for (auto& child: root -> children)
            postorder(child);
        order_list.push_back(root -> val);
        return order_list;
    }
    
private:
    vector<int> order_list;
};

int main(){
    return 0;
}