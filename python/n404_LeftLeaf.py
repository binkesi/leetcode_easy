# https://leetcode-cn.com/problems/sum-of-left-leaves/

# Definition for a binary tree node.
class TreeNode:
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None

class Solution:
    def sumOfLeftLeaves(self, root: TreeNode) -> int:
        if root is None: return 0
        if root.left is None:
            return self.sumOfLeftLeaves(root.right)
        if self.isLeaf(root.left):
            return root.left.val + self.sumOfLeftLeaves(root.right)
        return self.sumOfLeftLeaves(root.left) + self.sumOfLeftLeaves(root.right)

    def isLeaf(self, node: TreeNode) -> bool:
        if node.left is None and node.right is None:
            return True
        else:
            return False


if __name__ == "__main__":
    pass