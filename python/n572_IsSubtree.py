# https://leetcode-cn.com/problems/subtree-of-another-tree/
# Definition for a binary tree node.
class TreeNode:
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None

class Solution:
    def isSubtree(self, s: TreeNode, t: TreeNode) -> bool:
        if s is None and t is None: return True
        if s is None and t is not None: return False
        if s.val == t.val and self.isSame(s, t): return True
        return (self.isSubtree(s.left, t) or self.isSubtree(s.right, t))
    
    def isSame(self, s, t):
        if s is None and t is None: return True
        if s is None and t is not None: return False
        if t is None and s is not None: return False
        return (s.val == t.val and self.isSame(s.left, t.left) and isSame(s.right, t.right))


if __name__ == "__main__":
    pass          