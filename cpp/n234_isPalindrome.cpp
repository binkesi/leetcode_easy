// https://leetcode-cn.com/problems/palindrome-linked-list/
#include <iostream>
#include <vector>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if (head == NULL) return true;
        ListNode* tmp = head;
        vector<int> mylist;
        while (tmp != NULL){
            mylist.push_back(tmp -> val);
            tmp = tmp -> next;
        }
        int left = 0;
        int right = mylist.size() - 1;
        while (left < right){
            if (mylist[left] != mylist[right]) return false;
            left += 1;
            right -= 1;
        }
        return true;
    }
};

int main(){
    return 0;
}