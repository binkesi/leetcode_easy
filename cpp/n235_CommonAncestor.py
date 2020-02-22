# https://leetcode-cn.com/problems/lowest-common-ancestor-of-a-binary-search-tree/

# Definition for a binary tree node.
class TreeNode:
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None

class Solution:
    def lowestCommonAncestor(self, root: 'TreeNode', p: 'TreeNode', q: 'TreeNode') -> 'TreeNode':
        root_val = root.val
        l_val = min(p.val, q.val)
        r_val = max(p.val, q.val)
        if l_val <= root_val and r_val >= root_val:
            return root
        if l_val < root_val and r_val < root_val:
            return self.lowestCommonAncestor(root.left, p, q)
        if l_val > root_val and r_val > root_val:
            return self.lowestCommonAncestor(root.right, p, q)
            

if __name__ == "__main__":
    pass             