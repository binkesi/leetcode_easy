# https://leetcode-cn.com/problems/binary-tree-paths/
# Definition for a binary tree node.
class TreeNode:
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None

class Solution:
    def binaryTreePaths(self, root: TreeNode):
        path = []
        cur_path = ""
        def trans_path(root, cur_path, path):
            if root is None: return
            cur_path = cur_path + "->" + str(root.val)
            if root.left is None and root.right is None:
                path.append(cur_path[2:])
                cur_path = cur_path[:-4]
                return
            trans_path(root.left, cur_path, path)
            trans_path(root.right, cur_path, path)
        trans_path(root, cur_path, path)
        return path 


if __name__ == "__main__":
    pass
            