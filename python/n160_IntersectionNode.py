#https://leetcode-cn.com/problems/intersection-of-two-linked-lists/
# Definition for singly-linked list.
class ListNode:
    def __init__(self, x):
        self.val = x
        self.next = None

class Solution:
    def getIntersectionNode(self, headA: ListNode, headB: ListNode) -> ListNode:
        if headA is None or headB is None:
            return None
        p_a = headA
        p_b = headB
        while p_a != p_b:
            if p_a is not None:
                p_a = p_a.next
            else: p_a = headB
            if p_b is not None:
                p_b = p_b.next
            else: p_b = headA
        return p_a
    
    def getIntersectionNode_a(self, headA: ListNode, headB: ListNode) -> ListNode:
        node_map = {}
        if headA is None or headB is None:
            return None
        p_a = headA
        p_b = headB
        while p_a is not None:
            node_map[p_a] = True
            p_a = p_a.next
        while p_b is not None:
            if p_b in node_map:
                return p_b
            p_b = p_b.next

if __name__ == "__main__":
    pass