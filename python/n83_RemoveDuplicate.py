# https://leetcode-cn.com/problems/remove-duplicates-from-sorted-list/
# Definition for singly-linked list.
class ListNode:
    def __init__(self, x):
        self.val = x
        self.next = None

class Solution:
    def deleteDuplicates(self, head: ListNode) -> ListNode:
        if head is None or head.next is None:
            return head
        baseDup = head
        isDup = head.next
        while isDup is not None:
            if isDup.val == baseDup.val:
                baseDup.next = isDup.next
                isDup = baseDup.next
            else:
                baseDup = baseDup.next
                isDup = isDup.next
        return head