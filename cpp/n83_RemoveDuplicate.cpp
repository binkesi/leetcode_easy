// https://leetcode-cn.com/problems/remove-duplicates-from-sorted-list/
#include <iostream>
#include <vector>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == NULL || head -> next == NULL) return head;
        ListNode* baseDup = head;
        ListNode* isDup = head -> next;
        while(isDup != NULL){
            if (isDup -> val == baseDup -> val){
                baseDup -> next = isDup -> next;
                isDup = baseDup -> next;
            }
            else{
                baseDup = baseDup -> next;
                isDup = isDup -> next;
            }
        }
        return head;
    }
};

int main(){
    return 0;
}