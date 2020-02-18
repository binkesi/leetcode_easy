# https://leetcode-cn.com/problems/remove-linked-list-elements/

# Definition for singly-linked list.
class ListNode:
    def __init__(self, x):
        self.val = x
        self.next = None

class Solution:
    def removeElements(self, head: ListNode, val: int) -> ListNode:
        if head is None: return head
        while head.val == val and head.next is not None:
            head = head.next
        if head.val == val:
            head = None
            return head
        p1 = head
        p2 = head.next
        while p2 is not None:
            if p2.val == val:
                p2 = p2.next
                p1.next = p2
            else:
                p1 = p1.next
                p2 = p2.next
        return head
        
        
if __name__ == "__main__":
    pass
            