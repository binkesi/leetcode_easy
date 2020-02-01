# https://leetcode-cn.com/problems/minimum-depth-of-binary-tree/
class TreeNode:
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None

class Solution:
    def minDepth(self, root: TreeNode) -> int:
        if root is None: return 0
        if root.left is None: return self.minDepth(root.right) + 1
        if root.right is None: return self.minDepth(root.left) + 1
        return min(self.minDepth(root.left), self.minDepth(root.right)) + 1  
        
        
if __name__ == "__main__":
    pass