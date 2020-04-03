# https://leetcode-cn.com/problems/find-mode-in-binary-search-tree/
# Definition for a binary tree node.
class TreeNode:
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None

class Solution:
    def findMode(self, root: TreeNode):
        res = []
        node_dict = {}
        self.TransTree(root, node_dict)
        sort()
        
    def TransTree(self, root: TreeNode, node_dict):
        if root is None:
            return
        else:
            if root.val not in node_dict.keys():
                node_dict[root.val] = 1
            else:
                node_dict[root.val] += 1
        self.TransTree(root.left, node_dict)
        self.TransTree(root.right, node_dict)


if __name__ == "__main__":
    pass
        