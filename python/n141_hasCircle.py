# https://leetcode-cn.com/problems/linked-list-cycle/

# Definition for singly-linked list.
class ListNode:
    def __init__(self, x):
        self.val = x
        self.next = None

class Solution:
    def hasCycle(self, head: ListNode) -> bool:
        if head is None or head.next is None:
            return False
        slow = head
        fast = head.next      
        while slow != fast:
            if fast is None or fast.next is None:
                return False
            else:
                slow = slow.next
                fast = fast.next.next
        return True 
        
if __name__ == "__main__":
    pass