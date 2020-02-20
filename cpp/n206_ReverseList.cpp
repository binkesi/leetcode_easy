// https://leetcode-cn.com/problems/reverse-linked-list/
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;


// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (head == NULL || head -> next == NULL) return head;
        ListNode* p = reverseList(head -> next);
        head -> next -> next = head;
        head -> next = NULL;
        return p;
    }
};

int main(){
    return 0;
}