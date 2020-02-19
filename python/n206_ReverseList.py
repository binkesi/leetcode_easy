# https://leetcode-cn.com/problems/reverse-linked-list/
# Definition for singly-linked list.

class ListNode:
    def __init__(self, x):
        self.val = x
        self.next = None

class Solution:
    def reverseList(self, head: ListNode) -> ListNode:
        pre = None
        cur = head
        while cur is not None:
            tmp = cur
            cur = cur.next
            tmp.next = pre
            pre = tmp
        return pre
        
    def reverseList_a(self, head: ListNode) -> ListNode:
        if head is None or head.next is None: return head
        p = self.reverseList_a(head.next)
        head.next.next = head
        head.next = None
        return p


if __name__ == "__main__":
    pass