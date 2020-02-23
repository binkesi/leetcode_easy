// https://leetcode-cn.com/problems/delete-node-in-a-linked-list/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    void deleteNode(ListNode* node) {
        node -> val = node -> next -> val;
        node -> next = node -> next -> next;
    }
};

int main(){
    return 0;
}