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
    
    ListNode* reverseList_a(ListNode* head){
        ListNode* pre = NULL;
        ListNode* cur = head;
        while (cur != NULL){
            ListNode* tmp = cur;
            cur = cur -> next;
            tmp -> next = pre;
            pre = tmp;
        }
        return pre;
    }
};

int main(){
    return 0;
}