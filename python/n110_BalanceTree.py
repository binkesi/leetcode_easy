# https://leetcode-cn.com/problems/balanced-binary-tree/
class TreeNode:
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None

class Solution:
    def isBalanced(self, root: TreeNode) -> bool:
        if root is None: return True
        if self.isBalanced(root.left) and self.isBalanced(root.right) and abs(self.treeHeight(root.left) - self.treeHeight(root.right)) <= 1:
            return True
        else:
            return False
        
    def treeHeight(self, root: TreeNode):
        if root is None: return 0
        lev_queue = []
        lev_queue.append(root)
        level = 0
        while lev_queue:
            level += 1
            next_queue = []
            while lev_queue:              
                cur_node = lev_queue.pop(0)               
                if cur_node.left is not None: next_queue.append(cur_node.left)
                if cur_node.right is not None: next_queue.append(cur_node.right)
            lev_queue = next_queue
        return level            