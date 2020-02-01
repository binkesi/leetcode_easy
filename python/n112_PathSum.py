# https://leetcode-cn.com/problems/path-sum/
class TreeNode:
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None

class Solution:
    def hasPathSum(self, root: TreeNode, sum: int) -> bool:
        if not root:
            return False
        sum -= root.val
        if root.left is None and root.right is None:
            return sum == 0
        return self.hasPathSum(root.left, sum) or self.hasPathSum(root.right, sum)

    def hasPathSum(self, root: TreeNode, sum: int) -> bool:
        print(self.dfs_search(root))
        if sum in self.dfs_search(root):
            return True
        else: return False
    
    def dfs_search(self, root: TreeNode):
        path_sum = []
        node_stack = []
        p = root       
        sum = 0
        while node_stack != [] or p is not None:           
            while p is not None: 
                node_stack.append(p)
                sum += p.val                
                p = p.left
            p = node_stack.pop()
            sum -= p.val
            if p.left is None and p.right is None:
                path_sum.append(sum + p.val)          
            p = p.right
        return path_sum
            