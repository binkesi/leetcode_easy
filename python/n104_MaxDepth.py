# https://leetcode-cn.com/problems/maximum-depth-of-binary-tree/
class TreeNode:
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None

class Solution:
    def maxDepth(self, root: TreeNode) -> int:
        if root is None:
            return 0
        return max(self.maxDepth(root.left), self.maxDepth(root.right)) + 1
    
    def maxDepth_a(self, root: TreeNode) -> int:
        if root is None:
            return 0
        depth = 0
        stack = []
        stack.append((1, root))
        while stack != []:
            current_depth, root = stack.pop()
            if root is not None:
                depth = max(depth, current_depth)
                stack.append((current_depth+1, root.left))
                stack.append((current_depth+1, root.right))
        return depth
        
if __name__ == "__main__":
    pass