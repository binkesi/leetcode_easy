// https://leetcode-cn.com/problems/maximum-depth-of-n-ary-tree/
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>
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
    int maxDepth(Node* root) {
        if (root == NULL) return 0;
        int depth = 0;
        queue<vector<Node*>> my_queue;
        vector<Node*> tmp;
        tmp.push_back(root);
        my_queue.push(tmp);
        while (my_queue.front().size() != 0){
            tmp.clear();
            for (auto node: my_queue.front()){
                if (node == NULL || (node -> children).size() == 0) continue;
                for (auto child: node -> children) tmp.push_back(child);
            }
            my_queue.push(tmp);
            my_queue.pop();
            depth += 1;
        }
        return depth;
    }
};

int main(){
    return 0;
}