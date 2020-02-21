# https://leetcode-cn.com/problems/palindrome-linked-list/

# Definition for singly-linked list.
class ListNode:
    def __init__(self, x):
        self.val = x
        self.next = None

class Solution:
    def isPalindrome(self, head: ListNode) -> bool:
        if head is None: return True
        mystack = []
        iter = head
        while iter is not None:
            mystack.append(iter.val)
            iter = iter.next
        for i in range(0, len(mystack)//2):
            if mystack[i] != mystack[len(mystack)-i-1]:
                return False
        return True


if __name__ == "__main__":
    pass        