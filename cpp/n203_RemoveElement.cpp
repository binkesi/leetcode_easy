// https://leetcode-cn.com/problems/remove-linked-list-elements/
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

class Solution{
    ListNode* RemoveElement(ListNode* head, int val){
        ListNode sol(val+1);
        sol.next = head;
        ListNode* pre = &sol;
        ListNode* cur = head;
        while (cur != NULL){
            if (cur -> val == val){
                cur = cur -> next;
                pre -> next = cur;
            }
            else{
                pre = pre -> next;
                cur = cur -> next;
            }
        }
        return sol.next;
    }
};

int main(){
    return 0;
}
