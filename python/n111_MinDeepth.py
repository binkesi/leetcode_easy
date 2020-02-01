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
    
    def minDepth_bfs(self, root: TreeNode) -> int:
        if root is None: return 0
        min_deep = 0
        bfs_queue = []
        bfs_queue.append(root)
        while bfs_queue != []:
            next_queue = []
            min_deep += 1
            while bfs_queue != []:
                cur_node = bfs_queue.pop(0)
                if cur_node.left is None and cur_node.right is None: return min_deep
                if cur_node.left is not None: next_queue.append(cur_node.left)
                if cur_node.right is not None: next_queue.append(cur_node.right)
            bfs_queue = next_queue
            
        
if __name__ == "__main__":
    pass