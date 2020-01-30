# https://leetcode-cn.com/problems/binary-tree-level-order-traversal-ii/
class TreeNode:
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None

class Solution:
    def levelOrderBottom(self, root: TreeNode):
        level_trav = []
        cur_queue = []
        if root == None:
            return level_trav
        cur_queue.append(root)      
        while cur_queue != []:
            next_queue = []
            cur_lev = []
            while cur_queue != []:
                cur_node = cur_queue.pop(0)                              
                cur_lev.append(cur_node.val)
                if cur_node.left is not None: next_queue.append(cur_node.left)
                if cur_node.right is not None: next_queue.append(cur_node.right)
            level_trav.append(cur_lev)
            cur_queue = next_queue
        return level_trav[::-1] 


if __name__ == "__main__":
    pass