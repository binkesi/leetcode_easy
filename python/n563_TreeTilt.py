# https://leetcode-cn.com/problems/binary-tree-tilt/
# Definition for a binary tree node.
class TreeNode:
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None

class Solution:
    def findTilt(self, root: TreeNode) -> int:
        if root is None: return 0
        if root.left is None and root.right is None: return 0        
        return self.findTilt(root.left) + self.findTilt(root.right) + self.calTilt(root)
    
    def calTilt(self, node):
        def calSum(v):
            if v is None: return 0
            return calSum(v.left) + calSum(v.right) + v.val
        return abs(calSum(node.left) - calSum(node.right)) 
        

class Solution_a:
    def __init__(self):
        self.res = 0
        
    def findTilt(self, root: TreeNode):
        self.calSum(root)
        return self.res
    
    def calSum(self, node):
        if node is None: return 0
        l = self.calSum(node.left)
        r = self.calSum(node.right)
        self.res += abs(l - r)
        return l + r + node.val        


if __name__ == "__main__":
    pass        