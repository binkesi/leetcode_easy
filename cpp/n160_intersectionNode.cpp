// https://leetcode-cn.com/problems/intersection-of-two-linked-lists/
// Definition for singly-linked list.
#include <iostream>
#include <vector>
#include <map>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* p_a = headA;
        ListNode* p_b = headB;
        while (p_a != p_b) {
            if (p_a == NULL) p_a = headB;
            else p_a = p_a -> next;
            if (p_b == NULL) p_b = headA;
            else p_b = p_b -> next;
        }
        return p_a;
    }
    
    ListNode *getIntersectionNode_a(ListNode *headA, ListNode *headB) {
        ListNode* p_a = headA;
        ListNode* p_b = headB;
        map <ListNode*, bool> node_map;
        while(p_a != NULL){
            node_map.insert(pair<ListNode*, bool>(p_a, true));
            p_a = p_a -> next;
        }
        while(p_b != NULL){
            auto iter = node_map.find(p_b);
            if (iter != node_map.end()) return p_b;
            p_b = p_b -> next;
        }
        return NULL;
    }
};

int main(){
    return 0;
}